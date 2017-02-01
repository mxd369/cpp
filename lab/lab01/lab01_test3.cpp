





      std::cout << "Please enter a value ";
    }
      else {
        std::cout << "Please enter another value ";
      }

      std::cin >> val;

      setValue(var, k, index, val);




       std::cout <<"\n";
    index++;
  }
    std::cout <<  getValue(var, k, 2);

}
//k min =1, k max = 32, i min = 0, i max = 31

void setValue(unsigned int & var, unsigned int k, unsigned int i, unsigned int val) {

  int numberOfBitsPerValue = 32/k;
//gets the beggining and ending index of where the value should be
 int maxShift = numberOfBitsPerValue*i;

 if(i == 0){
    maxShift = numberOfBitsPerValue;
  }

 int minShift = (numberOfBitsPerValue*i)- numberOfBitsPerValue;
 //marks the end of above process
 //next marks clearing the reference bit in order to change it 

 //fin, the 1U marks that the value is unsigned, when using signed variables, do not use U
 //bitset is used to create 32 bits including the val passed through from right to left, we shift it to the index   given by the user and include it within the reference var
 unsigned int bitMask = (0xFF  & 0);

 bitMask |= val;
 bitMask <<= maxShift;
for(int k = numberOfBitsPerValue*i; k > minShift; k--){
   var &= ~(1<<i);
 }

 var |= bitMask;








  }
 unsigned int getValue(unsigned int var, unsigned int k, unsigned int i) {
   int numberOfBitsPerValue = 32/k;
   int maxShift = numberOfBitsPerValue*i;

   var>>= maxShift;
   var<<= ( 32-maxShift);
   var >>= (32 - maxShift);
   return var;
 }