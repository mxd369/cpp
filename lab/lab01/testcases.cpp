int main(){
  
  unsigned int var = 0; //the integer that holds all the numbers to be stored

 
int testCasesPassed = 0, current=0, totalTestCases=6, totalScore=0;
cout<<endl<<endl;
cout<<endl<<"Test case 1: Testing K  = 4 "<<endl;
cout<<"Trying to set 12 to partition 0, 20 to partition 2, 255 to partition 3, 0 to partition 1 "<<endl;
setValue(var,4,0,12);
setValue(var,4,2,20);
setValue(var,4,3,255);
setValue(var,4,1,0);
cout<<"Verify from the following output: Printing from partition 0 through partition 3"<<endl;
if(getValue(var,4,0) == 12 && getValue(var,4,1) == 0 && getValue(var,4,2) == 20 && getValue(var,4,3) == 255) {
	testCasesPassed++;
	current++;
	totalScore+=13;
}
cout<<getValue(var,4,0)<<" ";
cout<<getValue(var,4,1)<<" ";
cout<<getValue(var,4,2)<<" ";
cout<<getValue(var,4,3)<<" ------- >";

if(current == 1) cout<<"PASSED"<<endl;
else cout<<"FAILED"<<endl;
 
var=0; //Reset partition manunally
current=0;

cout<<endl<<"###############################"<<endl<<endl<<"Test case 2: Testing K  = 2 "<<endl;
cout<<"Trying to set 1042 to partition 1, 2048 to partition 0"<<endl;
setValue(var,2,1,1042);
setValue(var,2,0,2048);

cout<<"Verify from the following output: Printing from partition 0 through partition 1"<<endl;
if(getValue(var,2,0) == 2048 && getValue(var,2,1) == 1042) {
	testCasesPassed++;
	current++;
	totalScore+=13;
}
cout<<getValue(var,2,0)<<" ";
cout<<getValue(var,2,1)<<" ------- >";

if(current == 1) cout<<"PASSED"<<endl;
else cout<<"FAILED"<<endl;


var=0; //Reset partition manunally
current=0;

cout<<endl<<"###############################"<<endl<<endl<<"Test case 3: Testing K  = 2 (TEST for verifying OVERWRITE sections) "<<endl;
cout<<"Trying to set 10 to partition 1 then overwriting partition 1 by 18 and leaving partition 0 unused"<<endl;
cout<<"Verify from the following output: Printing partition 1 only"<<endl;
setValue(var,2,1,10);
setValue(var,2,1,18);

cout<<getValue(var,2,1)<<" ------- >";

if(getValue(var,2,1) == 18 ){
	testCasesPassed++;
	current++;
	totalScore+=15;
}

if(current == 1) cout<<"PASSED"<<endl;
else cout<<"		FAILED		"<<endl;

var=0; //Reset partition manunally
current=0;

cout<<endl<<"###############################"<<endl<<endl<<"Test case 4: Testing K = 1"<<endl;
cout<<"Trying to set 201420 to partition 0"<<endl;
setValue(var,1,0,201420);
cout<<"Verify from the following output: Printing partition 0"<<endl;
cout<<getValue(var,1,0)<<" ------- >";

if(getValue(var,1,0) == 201420 ){
	testCasesPassed++;
	current++;
	totalScore+=13;
}

if(current == 1) cout<<"PASSED"<<endl;
else cout<<"FAILED"<<endl;

var=0; //Reset partition manunally
current=0;


cout<<endl<<"###############################"<<endl<<endl<<"Test case 5: Testing K = 8"<<endl;
cout<<"Trying to set 10 to partition 4,1 to partition 2, 14 to partition 6, 15 to partition 7,2 partition 3,12 to partition 5, 8 to partition 0, 9 to partition 1"<<endl;
setValue(var,8,4,10);
setValue(var,8,2,1);
setValue(var,8,6,14);
setValue(var,8,7,15);
setValue(var,8,3,2);
setValue(var,8,5,12);
setValue(var,8,0,8);
setValue(var,8,1,9);
cout<<"Verify from the following output: Printing partition 0 through partition 7"<<endl;
cout<<getValue(var,8,0)<<" ";
cout<<getValue(var,8,1)<<" ";
cout<<getValue(var,8,2)<<" ";
cout<<getValue(var,8,3)<<" ";
cout<<getValue(var,8,4)<<" ";
cout<<getValue(var,8,5)<<" ";
cout<<getValue(var,8,6)<<" ";
cout<<getValue(var,8,7)<<" ------- >";

if(getValue(var,8,0)==  8 &&  getValue(var,8,1)==  9&&  getValue(var,8,2)==  1&&  getValue(var,8,3)==  2&&  getValue(var,8,4)==  10&&  getValue(var,8,5)== 12 &&  getValue(var,8, 6)== 14 &&  getValue(var,8,7)== 15){
	testCasesPassed++;
	current++;
	totalScore+=13;
}

if(current == 1) cout<<"PASSED"<<endl;
else cout<<"FAILED"<<endl;



var=0; //Reset partition manunally
current=0;


cout<<endl<<"###############################"<<endl<<endl<<"Test case 6 : Testing K = 32"<<endl;
cout<<"Trying to set alternate 0's and 1's to partitions from partition 0 through partition 31"<<endl;
for(int i=0;i<=31;i++){
	if(i%2==0) setValue(var,32,i,0);
	else setValue(var,32,i,1);
}
cout<<"Verify from the following output: Printing partition 0 through partition 31"<<endl;
for(int i=0;i<=31;i++){
cout<<getValue(var,32,i)<<" ";
}
int i;
for(i=0;i<=31;i++){
	if(i%2 == 0 && getValue(var,32,i) != 0) break;
	else if (i%2 == 1 && getValue(var,32,i) != 1) break;
}
	if(i==32){
		testCasesPassed++;
		current++;
		totalScore+=13;
	}
if(current == 1) cout<<" -------- >PASSED"<<endl;
else cout<<" ---------> FAILED"<<endl;


cout<< endl;
cout<<"Total test cases passed: "<<testCasesPassed<<" out of "<<totalTestCases<<endl;
cout<<"Total score: "<<totalScore<<" / 80"<<endl;


  return EXIT_SUCCESS;
} // main