#include<tmwp>
#include<iostream>
using namespace std;
using namespace tmwp;
void doSomething(int dataCount,char *data[])
{
cout<<"Great !! , this code got exceuted on server side"<<endl;
if(dataCount>0) cout<<"Data that arrived"<<endl;
for(int r=0;r<dataCount;r++)
{
cout<<data[r]<<endl;
}
}
int main()
{
TMWebProjector server(5050);
server.onRequest("/register",doSomething);
server.start();
return 0;
}