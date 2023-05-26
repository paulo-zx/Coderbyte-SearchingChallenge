#include <iostream>
#include <string>
using namespace std;

bool buscar(string str,char ch,int pos){
  int q=str.length();
  for(int i=0;i<q;i++){
    if(i == pos){
      continue;
    }if(str[i]==ch){
      return true;
    }
  }
  return false;
}

string NonrepeatingCharacter(string str) {
  int a=str.length();  
  int b=str.length();
  for(int j=0;j<b;j++){
    if(!buscar(str,str[j],j)&& j<a){
      a=j;
      str=str[j];
    }
  }
  return str;

}

int main() 
{
	cout << NonrepeatingCharacter("agettkgaeee") << endl; // k
	cout << NonrepeatingCharacter("abcdef") << endl; // a
	cout << NonrepeatingCharacter("hello world hi hey") << endl; // w
	
	//string tok = "t0adax1";
	//cout << NonrepeatingCharacter(coderbyteInternalStdinFunction(stdin)) << tok << endl;
	
	return 0;

}