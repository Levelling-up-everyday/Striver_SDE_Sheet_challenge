//Type-1 ,just to print a particular element given row and col
//Using n-1Cr-1
void pascal(int n,int r){
  int res=1;
  for(int i=0;i<r;i++){
    res=res*(n-i);
    res=res/(i+1);
  }
}

//Type -2 ,Given row no. print the entire row
//n row has n elements
//For logic u can refer to the attached image in this folder
