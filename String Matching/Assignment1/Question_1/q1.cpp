#include<iostream>
#include <fstream>
#include<string>
using namespace std;


int main(){
	
	int count=0;
	string text,pattern;
	ifstream queryfile("pattern.txt"); //contains patterns
	ifstream textfile("text.txt"); //contains text
	ofstream output_file; //contains the outputs of the programme
	output_file.open("matchoutput.txt"); 
	
	int i=0;
	int j;
	int textLength=0;
	int patternLength=0;
	
	if (queryfile.is_open() && textfile.is_open() && output_file.is_open())
	{
		while(getline (queryfile,pattern) && getline (textfile,text)){ //getting the pattern and it's corresponding text
			textLength=text.length();
			patternLength=pattern.length();
			if(textLength==0 && patternLength==0){ // to check if test file and pattern file are empty 
				output_file<<"text and pattern lines are empty"<<endl;
			}else{
			count=0;
			i=0;
			while(i<textLength-patternLength+1){ //navie string matching 
				j=0;
				while(j<patternLength){
					if(text[i+j]==pattern[j] || pattern[j]=='_' ){
						j=j+1;
					
					
				}else{
					break;
				}
			}
				if(j==patternLength){
					
					count++;
					if(count==1){ //to print text,pattern only once in output file
				
						output_file<<"Text - "<< text << endl;
						output_file<<"pattern - " << pattern << endl;
				}
				output_file<<"pattern found at index ->" <<i<<"\n"<<endl;
				
				
			}
			i=i+1;	
			
		}
		if(count==0){
							
			output_file<<"Text - "<< text << endl;
			output_file<<"pattern - " << pattern << endl;
			output_file<<"pattern is not found"<< "\n"<<endl;
		}
	}
	}
	
}

	textfile.close();
	queryfile.close();
	output_file.close();
	
}
