#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

while(t--)
{
    stack <char>m;
    queue<char>p;
    stack <char>q;
    queue <char>l;
    stack <char>u;
      int n;
      cin>>n;

 char c;
for(int i=0;i<n;i++) //1 18 RBGRGBBRGBGRGRBGBR//
{
  cin>>c;
  //c=toupper(c);
 p.push(c);

}
while(!p.empty())
{
    char s=p.front();
    p.pop();
char t;
if(q.empty()) //R
{
    q.push(s);
     t=q.top();
}



else
    {

 if(s=='R' && t=='B' || s=='B' && t=='R')
    {
         q.pop();
        l.push('P');

    }

 else if(s=='R' && t=='G' || s=='G' && t=='R') //Y
    {

        q.pop();
        l.push('Y');
    }

 else if(s=='B' && t=='G' || s=='G' && t=='B')
    {
         q.pop();
        l.push('C');
    }

else if(s=='B' && q.top()=='B' )
{
    q.pop();
}
else if(s=='R' && q.top() =='R')
{
    q.pop();
}
else if(s=='G' && q.top() =='G')
{
    q.pop();
}
}
}

while(!l.empty()) //PYCPCYYCP
{
   char n=l.front();
    l.pop();
    char t;
if(m.empty())
{
    m.push(n); //m=PYCPC
    t=m.top();
}
else
    {
     if(n== t)
     {
         m.pop();
         if(!m.empty())
         {
              t=m.top();
         }
     }
    else if(n!= t)
     {
         m.push(n);
         t=m.top();
     }
    }

}

while(!m.empty())
{
    char p=m.top();
    m.pop();
    u.push(p);

}
while(!u.empty())
{
    char p=u.top();
    u.pop();
    cout<<p;

}

while(!q.empty())
{
    char m=q.top();
    q.pop();
    cout<<m;
}
cout<<endl;


}

}

