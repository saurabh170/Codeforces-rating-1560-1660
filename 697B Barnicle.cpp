#include "bits/stdc++.h"
using namespace std;
#define _ long long int

int main(int argc, char const *argv[]) {
  char a[500];
  cin>>a;
  char ans[500];
  _ lena=0,lenb=0,lenc=0;
  _ i=0;
  while(a[i]!='.'){
    i++;
    lena++;
  }
  i++;
  while(a[i]!='e'){
    lenb++;
    i++;
  }
  i++;
  _ c=0;
  _ kkk=0;
  _ ppp = strlen(a);
  ppp--;
  while(ppp>=i){
  //  cout<<a[i]<<endl;
    c=c+(int(a[ppp])-int('0'))*pow(10,kkk);
    kkk++;
    ppp--;
    lenc++;
  }
  //cout<<c<<endl;
  if (lenb<=c) {
    for (size_t i = 0; i < lena; i++) {
      ans[i]=a[i];
    }
    _ j = lena;

    _ ii=lena+1;
    while(ii<=lena+lenb){
      ans[j]=a[ii++];
      j++;
    }
    for(_ i=0;i<(c-lenb);i++){
      ans[j]='0';
      j++;
    }
  //  cout<<j<<endl;
    ans[j]='\0';
  }
  else{
    for (size_t i = 0; i < lena; i++) {
      ans[i]=a[i];
    }
    _ j = lena;

    _ ii=lena+1;
    while(ii<=lena+c){
      ans[j]=a[ii++];
      j++;
    }
    ans[j++]='.';
    while(j<=(lena+lenb)){
      ans[j++]=a[ii++];
    }
    ans[j]='\0';
    _ ss = strlen(ans)-1;
    while(1){
      if(ans[ss]=='0'){
        ans[ss--]='\0';
      }
      else{
        break;
      }
    }
    if(ans[ss]=='.'){
      ans[ss]='\0';
    }
  }

  for (size_t i = 0; i < strlen(ans); i++) {
    cout<<ans[i];
  }
  cout<<endl;
  return 0;
}
