#include <iostream>//подключаем нужные модули
#include <random>
using namespace std;



int funk(int *arr,int n){
int a=0;
for(int i=0; i<n; i++){//ищем нечётные
  if (arr[i]%2!=0){
    a++;
  }
}
return a;
}
int mass(int *arr,int n,int *arr2,int a){//функция и её параметры
//создаём новый массив
for(int i=0; i<n; i++){//заполняем массив нечётными
  if (arr[i]%2!=0){
    a=a-1;
    arr2[a]=arr[i];
    //cout<<arr2[a]<<" ";
  }
}
for(int i=0; i<a; i++){//выводим новый массив
cout<<arr2[i]<<" ";
}
return *arr2;// возвращаем массив
}

int main() {
// иницилизация 
srand( time(0) );
int n=10;
int *arr = new int[n];
for (int i=0; i<n; i++){
  arr[i]=rand() % 30;
  cout<<arr[i]<<" ";//выводим 
}
cout<<endl;
int a=funk(arr, n);
cout<<endl;
int *arr2 = new int[a];
cout<<endl;
mass(arr, n, arr2, a);//запуск функции
cout<<endl;
for (int i=0; i<a; i++){

cout<<arr2[i]<<" ";
}
delete [] arr2;
delete [] arr;
}