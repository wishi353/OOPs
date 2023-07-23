/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
  int mat[10][10],i,j,n,k,m,r,N,z,R,p,q,v;
  cout<<"Number of rows: ";
  cin>>n;
  cout<<"Number of columns: ";
  cin>>m;
  cout<<"Eneter the elements of matrix: "<<"\n";
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cin>>mat[i][j];
    }
  }
  if(mat[0][0]==0){
    for(j=0;j<m;j++){
      z=-1;
      for(i=1;i<n;i++){
        if(mat[i][j]!=0){
          z=i;
          break;
        }
      }
      if(z!=-1){
        for( v=0;v<m;v++){
          int t=mat[0][v];
          mat[0][v]=mat[i][v];
          mat[i][v]=t;
        }
        break; 
      }
    }
  }
  for(k=0;k<n-1;k++){
    for(i=k+1;i<n;i++){
      p=mat[k][k];
      q=mat[i][k];
      for(j=0;j<m;j++){
        mat[i][j]=p*mat[i][j] - q*mat[k][j];
      }
    }
  }
  z=0;
  for(i=0;i<n;i++){
    int c=0;
    for(j=0;j<m;j++){
      if(mat[i][j]==0){
        c++;
      }
    }
    if(c==m){
      z++;
    }
  }
  R=n-z;
  //N=m-R;
  cout<<"Rank = "<<R<<endl;
  //cout<<"Nullity = "<<N<<endl;
}