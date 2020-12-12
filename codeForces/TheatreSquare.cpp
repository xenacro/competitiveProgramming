/*Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

Input
The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

Output
Write the needed number of flagstones.*/

#include<iostream>
using namespace std;
int meramin(long int x, long int y){
  if(x<y)
    return x;
  return y;
}
int meramax(long int x, long int y){
  if(x<y)
    return y;
  return x;
}
int main()
{

    long int m,n,a,r1,r2,mm,mmx;
    cin>>m>>n>>a;
    mm=meramin(m,n);
    mmx=meramax(m,n);
    if(mm%a){
      r1=(mm/a)+1;
    }else
      r1=mm/a;
    if(mmx%a){
      r2=(mmx/a)+1;
    }else
      r2=mmx/a;
    cout<<r1*r2;
    return 0;
}
