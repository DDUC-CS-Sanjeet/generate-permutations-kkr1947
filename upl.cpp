/*Kuldeep Kumar 19CS4028 
code for finding permutation*/
#include<iostream>
using namespace std;
int x=1;
void perm(char a[],int index,int l)
{
if(l==index+1)
{
cout<<a<<endl;
}
else
{
    for(int i=index;i<l;i++)
    {
        swap(a[index],a[i]);
        perm(a,index+1,l);
        swap(a[index],a[i]);
    }
}
}
int main()
{
    int x;
    cout<<"enter a number"<<endl;
    cin>>x;
    char *ch = new char[x+1];
    char a= 'a';
    ch[x+1]='\0';
    for(int i=0;i<x;i++)
    ch[i]=a++;
    if(x<=0)
    {
        cout<<"invalid number of characters"<<endl;
    }
    else if(x>1)
    {
        cout<<"Total number of permutations : \n";
        perm(ch,0,x);
    }
    return 0;
}
