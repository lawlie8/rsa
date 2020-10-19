//Warning: Encountered more data after announced end of track (frame 11787/11787). Frankenstein!
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int hex(char ch);
int len(string msg);


int len(string msg)//length function nothing else
{
  int i = 0;
  while(1){
    if(msg[i] !='\0'){
      i++;
    }
    else{
      break;
    }
  }
return i;
}//end len

int hex(char ch){
//ascii table here
const char *hex_list[] = {"NUL","SOH","STX","ETX","EOT","ENQ","ACK","BEL","BS","HT","LF","VT","FF","CR","SO","SI","DLE","DC1","DC2","DC3","DC4","NAK","SYN","ETB","CAN","EM","SUB","ESC","FS","GS","RS","US"," ","!", "\"" ,"#","$","%","&","'","(",")","*","+",",","-",".","/","0","1","2","3","4","5","6","7","8","9",":",";","<","=",">","?","@","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","[","\\","]","^","_","`","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","{","|","}","~","DEL"};
char hex_table[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
int r=0;
float f=0;
for(int i=0;i<=127;i++){
  if(ch == *hex_list[i]){
    f = i;
    int ff = floor(f/16);
    r = (f/16 - ff)*16;
    cout<<hex_table[ff]<<hex_table[r];}
  }
}//end hex






int main(){
  string msg_string = "";
  double p,q;
  cout<<"Enter Message\n";
  getline(cin, msg_string, '\n');
  char temp[len(msg_string)];
  for(int i=0;i<len(msg_string);i++){
    //temp[i] = msg_string[i];
    hex(msg_string[i]);
  }
}//end main
