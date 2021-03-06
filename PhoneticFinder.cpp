//Written by Alex Chagan 206262123
//used code at www.geeksforgeeks.org/split-a-sentence-into-words-in-cpp

#include "PhoneticFinder.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

namespace phonetic {
std::string find(std::string text, std::string word) 
	{
		try{
			
		std::string currentWord = "";
		bool isWord;
		for(auto x: text) //split the text into words
		{
			if(x == ' ')
			{
			    isWord = checkWord(currentWord,word); //check if the current word gives us a positive outcome 
		    	if(isWord == true)
		    	 return currentWord;
		    	 
			    currentWord = "";
			}
			else
				currentWord = currentWord + x;
		}
		isWord = checkWord(currentWord, word); //check the last word
		if(isWord == true)
			return currentWord;
		}
			catch(...)
			{
				cout << "Exception occurred";
			}
	}
	
	
	bool checkWord(std::string cWord, std::string word)
	{
		int cwSize = cWord.size();
		int wSize = word.size();
		if(cwSize != wSize)
	    	return false;
		else
		{
			bool flag = true;
			for(int i=0 ; i<wSize && flag==true ; i++) //go over the letters in the word
			{
		
		     if(cWord[i] == word[i])
				  flag = true;
		     else if(abs((int)cWord[i]-(int)word[i]) == 32) //checks upper-case/lower-case scenario
		      flag = true;
		     else
		      flag = false;
		     
		    //here we check all the special cases
		    
			 if(cWord[i] == 'v' || cWord[i] == 'V' || cWord[i] == 'w' || cWord[i] == 'W')
			    {
			    	if(word[i] == 'v' || word[i] == 'V' || word[i] == 'w' || word[i] == 'W')
			    	  flag = true;
			    	else 
			    	  flag = false;
			    }
			 else if(cWord[i] == 'b' || cWord[i] == 'B' || cWord[i] == 'f' || cWord[i] == 'F' || cWord[i] == 'p' || cWord[i] == 'P')
			    {
			    	if(word[i] == 'b' || word[i] == 'B' || word[i] == 'f' || word[i] == 'F' || word[i] == 'p' || word[i] == 'P')
			    	  flag = true;
			    	else 
			    	  flag = false;
			    }
			 else if(cWord[i] == 'g' || cWord[i] == 'G' || cWord[i] == 'j' || cWord[i] == 'J')
			    {
			    	if(word[i] == 'g' || word[i] == 'G' || word[i] == 'j' || word[i] == 'J')
			    	  flag = true;
			    	else 
			    	  flag = false;
			    }
			 else if(cWord[i] == 'c' || cWord[i] == 'C' || cWord[i] == 'k' || cWord[i] == 'K' || cWord[i] == 'q' || cWord[i] == 'Q')
			    {
			    	if(word[i] == 'c' || word[i] == 'C' || word[i] == 'k' || word[i] == 'K' || word[i] == 'q' || word[i] == 'Q')
			    	  flag = true;
			    	else 
			    	  flag = false;
			    }
			 else if(cWord[i] == 's' || cWord[i] == 'S' || cWord[i] == 'z' || cWord[i] == 'Z')
			    {
			    	if(word[i] == 's' || word[i] == 'S' || word[i] == 'z' || word[i] == 'Z')
			    	  flag = true;
			    	else 
			    	  flag = false;
			    }
			    else if(cWord[i] == 'd' || cWord[i] == 'D' || cWord[i] == 't' || cWord[i] == 'T')
			    {
			    	if(word[i] == 'd' || word[i] == 'D' || word[i] == 't' || word[i] == 'T')
			    	  flag = true;
			    	else 
			    	  flag = false;
			    }
			    else if(cWord[i] == 'o' || cWord[i] == 'O' || cWord[i] == 'u' || cWord[i] == 'U')
			    {
			    	if(word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U')
			    	  flag = true;
			    	else 
			    	  flag = false;
			    }
			    else if(cWord[i] == 'i' || cWord[i] == 'I' || cWord[i] == 'y' || cWord[i] == 'Y')
			    {
			    	if(word[i] == 'i' || word[i] == 'I' || word[i] == 'y' || word[i] == 'Y')
			    	  flag = true;
			    	else 
			    	  flag = false;
			    }
			    
			}
			
			if(flag==true)
			return true;
			else
			return false;
			
			
		}
		
	}
}


