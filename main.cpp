#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size);

int main() {

  int as{};
  int ls{};
  std::cout << "Введите фактичеcкий размер массива: ";
  std::cin >> as;
  //do{
     std::cout << "Введите логичеcкий размер массива: ";
     std::cin >> ls;
     if(ls>as){
        std::cout<<"Ошибка! Логический размер массива не может превышать фактический!\n";
       return 1;
     }
  //}while(ls>as);
  int* arr = new int[as]();
  for(int i{};i<ls;i++){
    std::cout<<"Введите arr["<<i<<"]: ";
    std::cin>>arr[i];
  }
  std::cout<<"Динамический массив: ";
  print_dynamic_array(arr,ls,as);
  delete [] arr;

}

void print_dynamic_array(int* arr, int logical_size, int actual_size){
  //std::cout<<"Динамический массив: ";
  for(int i{};i<actual_size;i++){
    if(i<logical_size){
      std::cout<<arr[i];
    }else{
      std::cout<<"_";
    }
    if(i<actual_size-1){
      std::cout<<" ";
    }
  }
  std::cout<<"\n";
}
