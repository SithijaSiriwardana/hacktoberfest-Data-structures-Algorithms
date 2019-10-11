#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string line, pattern, query, dna, text;
	int flag, i, j, textLength, patternLength=0;
	ifstream dbfile;  	//contains DNA Database 
	ofstream output_file; //Result will output to the this file
	output_file.open("output.txt");
	ifstream queryfile("querybase.txt");	//contains query
	if (queryfile.is_open() && output_file.is_open())
	{
		
		while(getline (queryfile,pattern)){ //getting the queries line by line
			if(pattern[0]=='>' && pattern[1]!='E'){ 
				query = pattern;	//getting the query name
  				output_file << "\n"<< query << endl; //writing the query name to output file
  				continue;
			}else{
				dbfile.open("Database.txt");
				if(dbfile.is_open())
				{
					
					while(getline(dbfile,line)){	//getting the DNA sequence line by line
						flag = 0;	
			      		if(line[0]=='>'){
			      			dna = line; //getting the DNA sequence name
			      			text="";
			      			continue;
						  }else{
						  	if(line.length()<70){ //checking whether the current line is the last line 
						  		text+=line;
				   				i=0;
								textLength=text.length();
								patternLength=pattern.length();
								
								while(i<textLength-patternLength+1){ //naive string matching
									j=0;
									while(j<patternLength){
										if(text[i+j]==pattern[j]){
											j=j+1;
										}else{
											break;
										}
									}
									if(j==patternLength){
										output_file << "[" << dna << "]"<< " query found at index -> " << i <<endl;
										flag=1; //flag gets 1 if there is at least one match on the DNA database
										break;
									}
									i=i+1;
								}
							  }else{
							  	text+=line;
							  }
						  }
					}
				}
			}
			dbfile.close();
		}
		if(flag==0){ //Flag is 0 if query is not found in the any of the DNA sequence in database
			output_file <<"query is not found in the database";
		}
	}
	queryfile.close();
	output_file.close();
}
