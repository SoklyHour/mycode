//! Chapter 1: programming project 1
//? peas and pod
// #include <iostream>
// using namespace std;
// int main(){
//     int number_of_pods, pea_per_pod, total_peas;

//     cout<<"Hello\n";
//     cout<<"Press return after enter a number\n";
//     cout<<"Enter the number of pods:\n";
//     cin>>number_of_pods;

//     cout<<"Enter the pea per pod:\n";
//     cin>>pea_per_pod;
//     //formula
//     total_peas=number_of_pods*pea_per_pod;

//     cout<<"If you have ";
//     cout<<number_of_pods;
//     cout<<" pods\n";
//     cout<<" and ";
//     cout<<pea_per_pod;
//     cout<<" peas per pod, then\n";

//     cout<<"you have ";
//     cout<<total_peas;
//     cout<<" peas in all pods.\n";

//     cout<<"Good bye\n"; //2
//         return 0;
//learn....
// #include <iostream>
// using namespace std;
// //Program begins from the main method
// int main(){

//     //Define variables
//     double inputNums;
//     double sumOfPositiveNums=0;
//     double sumOfNegativeNums=0;
//     double totalOfAllNums=0;
//     //Readsten whole numbers 
//     cout<<" Enter any 10 numbers(whether positive, negative, or zero): "<<endl;

//     for(int i=0;i<10;i++){	
// 	    cin>>inputNums;
	    
// 	    totalOfAllNums +=inputNums ;

// 	   if(inputNums>0){//validate negative
//             sumOfPositiveNums += inputNums;}

//        else {
// 	        sumOfNegativeNums += inputNums;}
//     }
//     //Print sum of all positive numbers
//     cout<<"The sum of all the numbers greater than zero(all positive numbers): "
//          <<sumOfPositiveNums<<endl;
    
//     //Print sum of all negative numbers
//     cout<<"the sum of all the numbers less than zero (which will be a negative number or zero): "
//          <<sumOfNegativeNums<<endl;
//     //Print total sum of numbers
//     cout<<"The sum of all the numbers : "<<totalOfAllNums<<endl;
//     return 0;

// }
// }
//! programming project 2
// ?1. Write a C++ program that reads in two integers 
//? and then outputs both their sum and their product.

// #include <iostream>
// using namespace std;
// int main(){
//     int num1, num2, sum, product;
//     cout<<"Hello\n";
//     cout<<"Press return after entering a number\n";
//     cout<<"Enter the first integer: \n";
//     cin>> num1;
//     cout<<"Enter the second integer: \n";
//     cin>> num2;

//     sum=num1+num2;

//     product = num1 * num2;

//     cout<<"Sum of ";
//     cout<<num1;
//     cout<<" and ";
//     cout<<num2;

//     cout<<" = ";

//     cout<<sum;

//     cout<<"\nProduct of";
//     cout<<num1;
//     cout<<" and ";
//     cout<<num2;

//     cout<<" = ";
//     cout<<product;
//     cout<<"\n This is the end of the program\n";
//     return 0;

// } 
//! programming project 3
//? print CS
//Header file
// #include <iostream>
// using namespace std;

// int main()
// {
//   cout << "\n";
//   cout << "*************************************************\n";
//   cout << "\n";
//   cout << "           C C C             S S S S        !!\n";
//   cout << "         C       C         S         S      !!\n";
//   cout << "        C                 S                 !!\n";
//   cout << "       C                   S                !!\n";
//   cout << "       C                    S S S S         !!\n";
//   cout << "       C                             S      !!\n";
//   cout << "        C                             S     !!\n";
//   cout << "         C       C         S         S\n";
//   cout << "           C C C             S S S S        OO\n";
//   cout << "\n";
//   cout << "*************************************************\n";

//   cout << "\n\n";
//   cout << "Computer Science is Cool Stuff!!!\n";
//   cout << "\n";
// }
//! Programming Project 4
//? number of quarters, dimes,and nickels and then outputs the monetary value of the coins in cents
// #include <iostream>
// using namespace std;
// int main(){
//     int number_of_quarters, number_of_dimes, number_of_nickels, total;

//     int quarters =25;
//     int dimes=10;
//     int nickels=5;

//     cout<<" Enter the number of the quarters: ";
//     cin>>number_of_quarters;

//     cout<<" Enter the number of the dimes: ";
//     cin>>number_of_dimes;

//     cout<<" Enter the number of the nickels: ";
//     cin>>number_of_nickels;

//     total=(quarters*number_of_quarters)+(dimes*number_of_dimes)+(nickels*number_of_nickels);

//     cout<<"Total value in cents: \n"<<total;
//     return 0;

// }
//!programming project 06
//? input time. distance=(acceleration*(time*time))/2
// #include <iostream>
// using namespace std;
// int main(){

//     int acceleration=32;
//     int time, distance;

//     cout<<"Please input your time to the program to get the distance: \n";
//     cin>>time;

//     distance=(acceleration*(time*time))/2;

//     cout<<"The distance is "<<distance<<endl;
//     return 0;
// }
//! programming project 07
//? input char, output a large block of C
// #include <iostream>

// using namespace std;

// int main()
// {
//     char letter;
//     cout << "Please enter the letter: ";
//     cin >> letter;
//     cout << endl;
//     cout << "  " << letter << letter << letter << " " << endl;
//     cout << " " << letter << "   " << letter << endl;
//     cout << letter << "\n" << letter << "\n" << letter << "\n" << letter << "\n" << letter << endl;
//     cout << " " << letter << "   " << letter << endl;
//     cout << "  " << letter << letter << letter << " " << endl;
//     return 0;
// }

//?test1: Chapter 2: find the weight if the TotalWeight
// #include <iostream>
// using namespace std;
// int main(){

//     int numberofbar;
//     double oneweight, totalweight;

//     cout<<" Enter the number of the candy bars in a package\n";
//     cout<<" and the weight in ounces of one candy bar.\n";
//     cout<<"Then press return.\n";
//     cin>>numberofbar;
//     cin>>oneweight;

//     totalweight=oneweight*numberofbar;

//     cout<<numberofbar<<" candy bars\n";
//     cout<<oneweight<< " ounces each\n";
//     cout<<"Total weight is "<<totalweight<<" onces.\n";

//     cout<<"Try another brand.\n";
//     cout<<" Enter the number of candy bars in a packages.\n";
//     cout<<" and the weight in ounces of one candy bar.\n";

//     cout<<"Then press return.\n";
//     cin>>numberofbar;
//     cin>>oneweight;

//     totalweight=oneweight+numberofbar;

//     cout<<numberofbar<<" candy bars\n";
//     cout<<oneweight<<" onces each\n";
//     cout<<"Total weight is "<<totalweight<<" ounces.\n";
//     cout<<"Prehaps an apple would be healthier.\n";

//     return 0;
//}
//? test2: type char
// #include <iostream>
// using namespace std;
// int main(){

//     char symbol1, symbol2, symbol3;

//     cout<<" Enter two initials, without any periods:\n";
//     cin>>symbol1>>symbol2;
//     cout<<" The two initials are:\n";
//     cout<<symbol1<<symbol2<<endl;
//     cout<<" once more with a space:\n";
//     symbol3=' ';
//     cout<<symbol1<<symbol3<<symbol2<<endl;
//     cout<<" That is it!";

//     return 0;

// }
//?test3: the string type
// #include <iostream>
// using namespace std;
// int main(){

//     string middlename, petname;
//     string egoname;

//     cout<<" Enter ur middile name and the name of the pet: \n";
//     cin>>middlename;
//     cin>>petname;

//     egoname=petname+" "+middlename;
//     cout<<" The name of your ego is "<<egoname<<"."<<endl;
//     return 0;



// }

//?test4: if else statement
// #include <iostream>
// using namespace std;
// int main(){

//     int hour;
//     double grosspay, rate;

//     cout<<" Enter the hourly rate of pay: $";
//     cin>>rate;

//     cout<<" Enter the number of hour worked, \n"<<" rounded to a whole number of hours: ";
//     cin>>hour;

//     if(hour>40)
//         grosspay=rate*40+1.5*rate*(hour-40);
//         else
//             grosspay=rate*hour;

//         // cout.setf(ios::fixed);
//         // coutsetf(ios::showpoint);
//         // cout.precision(2);

//         cout<<" Hours = "<<hour<<endl;
//         cout<<"Hourly pay rate = $"<<rate<<endl;
//         cout<<" Gross pay= $"<<grosspay<<endl;
//         return 0;
// }

//? test5: charge card balance using while infinite loop
// #include <iostream>
// using namespace std;
// int main(){
//     double balance=50;
//     int count=0;
//     cout<<"This program tell you how long it takes"
//         <<"to accumulate a debt of 100$, starting with"
//         <<"an initial balance of $50 owed."
//         <<"The interest rate is 2% /month.";

//         while(balance<100.00){
//             balance=balance+0.02*balance;
//             count++;
//         }
//         cout<<"after "<<count<<" months,\n";
//         cout<<" your balance due will be $"<<balance<<endl;
//         return 0;

        
// }
//?test6: const and comment
// #include <iostream>
// using namespace std;
// int main(){
//     const double normal=98.6 ;// degree in fahrenheit
//     double temp;

//     cout<<" Enter ur temp: ";
//     cin>>temp;

//     if(temp>normal){
//         cout<<"You have a fever.\n";
//         cout<<"Drink lots of liquids and go to bed.";
//     }else{
//         cout<<"you do not have a fever. get back to code :0!";
//     }
//     return 0;
//? test7: expo function call
// #include <iostream>
// using namespace std;
// int exponentPower(int a, int b){

//     int result = 1;
//     if(b==0)
//         return 1;

//     for(int i=1;i<=b; ++i)
//         result = result*a;
//         return result;
// }

// int main() {
// cout<< exponentPower(2,3)<<endl;
// cout<< exponentPower(2,4)<<endl;

// }
//? test8

// #include<iostream>
// using namespace std;

// int main()
// {
//     double mph;
// 	cout<<"Enter the speed of the treadmill in mph:";
// 	cin>>mph;
// 	double min_per_mile=(1/mph)*60;
// 	int min=static_cast<int>(min_per_mile);
// 	double sec=(min_per_mile-min)*60;
// 	cout<<"A common pace is the "<<min<<" minutes and "<<sec
//                           <<" seconds per mile"<<endl;
// 	return 0;
// }
//? test9
// #include <iostream>
// using namespace std;        
// int main() {
// 	   double gallons,result;
// 	   const double lt=3.78533;
//        cout << "\nEnter number of gallons: ";
//        cin >> gallons;
//        result= gallons / lt;
//        cout << "Equivalent number of liters: " << result << endl;
// 	system("PAUSE");
// 	return 0; 
// }


// }//! Chapter 2: Programming project 1
//? a program that read weight of the breastfast cereal

// #include<iostream>
// using namespace std;
// int main(){
//     double const metric=35273.92;
//     double ounce,boxes,weight,numofboxes;

//     cout<<"Enter the weight of a package of breakfast cereal in ounces: ";
//     cin>>ounce;

//     weight=ounce/metric;
//     cout<<"the weight of the cereal "<<weight<<endl;

//     numofboxes=metric/ounce;
//     cout<<"the number of boxes of the cereal will hold a ton: "<<numofboxes<<endl;

//     return 0;
    
// }
//!project2
// //? soda pop

// #include <iostream>
// using namespace std;

// int main()
// {

// const double DIET_SODA_SWEETNER = 0.001;
// int DietSodaPopCans;
// double SweetnerMouse;
// double WeightMouse;
// double SweetnerDieter;
// double WeightDieter;

// cout << "This program calculates how many cans of soda it will take to kill you !\n";
// cout << "Each can contains 0.001 (0.1%) of artificial sweetener\n" << endl;

// cout << "Enter the amount of Artificial Sweetner needed to kill a mouse: \n";
// cin >> SweetnerMouse;

// cout << "Enter the weight of the mouse in grams: \n";
// cin >> WeightMouse;

// cout << "Enter the weight of the dieter in grams at which dieting activity will be stopped: \n";
// cin >> WeightDieter;

// SweetnerDieter = (SweetnerMouse/WeightMouse) * WeightDieter;
// DietSodaPopCans = (SweetnerDieter/DIET_SODA_SWEETNER);

// cout << "The amount of Diet Soda Pop Can's that would kill the dieter is: " << DietSodaPopCans;

// return 0;


// }
//! project 03
//? project 3: Workers at a particular company have won a 7.6% pay increase retroactive for six months.
//?Write a program that takes an employee’s previous annual salary as input, and outputs the amount of 
//?retroactive pay due the employee, the new annual salary, and the new monthly salary. 
//? Use a variable declaration with the modifier const to express the pay increase. 
//?Your program should allow the calculation to be repeated as often as the user wishes.
//7.6% pay increase retroactive for six months
// #include <iostream>
// using namespace std;
// int main()
// {
// 	cout.setf(ios::fixed);
// 	cout.setf(ios::showpoint);
// 	cout.precision(2);
// 	double previous_annual_salary;

// 	//Prompt the message
// 	cout<<"Congratulations! Workers at your company have won a 7.6% pay increase retroactive for six months"<<endl;
// 	cout<<"Please enter your previous annual salary: $";
// 	cin>>previous_annual_salary;
// 	cout<<previous_annual_salary<<endl;
// 	double previous_mo_salary = previous_annual_salary/12.0;
// 	double previous_6mo_salary = previous_mo_salary*6.0;
// 	double new_6mo_salary = previous_6mo_salary*1.076;

// 	double retroactive_pay_due = 
//       new_6mo_salary - previous_6mo_salary;
// 	double new_annual_salary = new_6mo_salary*2.0;
// 	double new_monthly_salary = new_6mo_salary/6.0;
// 	//Display output
// 	cout<<"Congratulations! Your retroactive pay is $"
//          <<retroactive_pay_due<<"."<<endl
// 		<< "Your new annual salary is $"
//           <<new_annual_salary<<"."<<endl
// 		<<"Your new monthly salary is $"
//           <<new_monthly_salary<<"."<<endl;
// 	return 0;
// }
//!Project 04

// #include <iostream>
// using namespace std;

// int main()
// {
//     char choice;
//     do{
//            double faceValue;
//            double intrestRate;
//            double loanDuration;
// 		   double yearDuration,intrest,repayment,loan;

// 		   cout << "Enter Loan Amount: $";
//            cin >> faceValue;

//            cout << "Enter Interest Rate: ";
//            cin >> intrestRate;

//             cout << "Enter duration: ";
//             cin >> loanDuration;

             
//             yearDuration = (loanDuration/12);
//             intrest =((faceValue * intrestRate) * yearDuration);
//             repayment = (faceValue/loanDuration);
//             loan = (faceValue - intrest);
                  
//                  cout << "Total loan interest: $" << intrest << ".\n"
//                        << "Given amount is: $" << loan << ".\n"
//                        << "Monthly payment for " << loanDuration << " months is: $" << repayment << ".\n" 
//                        << "If you would like to repeat this procedure,then enter y:\n";
//            cin >> choice;
           
//     } while (choice == 'y' || choice == 'Y');
//     return 0;
// }

//! project05
//? meeting room available programm. use do while loop
// #include <iostream>
// using namespace std;
// int main(){
//     int numofpeople;
//     int capacityofroom;
//     char userchoice;
//     do
//     {                   
//         cout<<"Enter the max room capacity: ";
//         cin>>capacityofroom;

//         cout<<"Enter the number of ppl to attend the meeting: ";
//         cin>>numofpeople;

//         if(numofpeople<= capacityofroom){
//             cout<<"You can hold the meeting legally!";}
        
//         else if(numofpeople>capacityofroom){
//             cout<<"You can not hold the meeting but if you can still want to hold the meeting u have to exclude: "
//             <<(numofpeople - capacityofroom)<<" Guest(s)...";
//             } 

//     cout<<endl<<"do u want to continue again the program? y/n: ";
//     cin>>userchoice;
//     cout<<endl<<endl;

//     } while ((userchoice == 'y'|| userchoice == 'Y'));
// cout<< "\n exit the program. Thank you!\n\n";
// return 0;
// }
//! project 06
//? work over time. very difficult

// #include<iostream>
// using namespace std;
// //main function
// int main()
// {
//     //Variables declaration 
// 	int numHoursWorked;
//     int numOfDependents;
// 	double workersGrossPay;
// 	char programerChoice;
//     //do-while loop repeats the program multiple times 
//     //as per programmer choice
// 	do	
// 	{ 
//       // Read in the number of hours worked in a week 
//       //and the number of dependents as input   
// 	  cout<<" Please enter number of hours worked per week: ";
// 	  cin>>numHoursWorked;
// 	  cout<<"Please enter number of dependents : ";
// 	  cin>>numOfDependents;


//      //Calculate grosspay of the worker as per given question
// 	 workersGrossPay =  numHoursWorked>40?((40 * 16.78)
//      +  (numHoursWorked-40)*(16.78*1.5)): (numHoursWorked*16.78);
// 	 cout<<workersGrossPay<<endl;

//      //Output the worker’s gross pay, each withholding amount,
//      // and the net take-home pay for the week
// 	 cout<<" Worker\'s gross pay :";
//     cout<<" Withhold amount  for state income tax= "
// 	    <<(.05 * workersGrossPay)<<"\n";
// 	 cout<<" Withhold amount for Social security tax = "
// 	       <<(.06* workersGrossPay)<<"\n";
//     cout<<" Withhold amount  for federal income tax = "
// 	     <<(.14* workersGrossPay)<<"\n";
// 	cout<<" Withhold amount  for union dues= $ 10 "<<"\n";
// 	if(numOfDependents >= 3)
// 	{
// 	cout<<" Withhold amount  for insurance cost $35\n";
// 		 workersGrossPay -= 35;
// 	}
// 	cout<<" Net amount take-home pay for the week  ";
// 	cout<<(workersGrossPay*(1-0.06 - 0.05-0.14) - 10)<<endl;
// 	cout<<"Press 'Y or y' for repeat again, otherwise press any character: ";
// 	cin>>programerChoice;
// 	}while(programerChoice =='y' || programerChoice =='Y');

// }


//! project 07
//? sell pencil program. price increase
// #include <iostream>
// using namespace std;
// int main(){

//     double itemprice;
//     double inflation;
//     int year;
//     char repeatoption;

//     do
//     {
//         cout<<"Please enter the cost of the item: ";
//         cin>>itemprice;
//         cout<<"Please enter the number of year from noe that the item eill be purchased: ";
//         cin>>year;
//         cout<<"Enter the rate if inflation: ";
//         // input the percentage of the inflation rage
//         cin>>inflation;

//         inflation /=10;

//         for(int i=0;i<year;i++){
//             itemprice *= (1 + inflation);

//         }
//         cout<<"Estimated cost of item after "<<year<<" will be: "<<itemprice<<endl;
//         cout<<"\n\n Type ('Y' or'y') for repeat calculations: ";
//         cin>>repeatoption;
//     } 

//     while (repeatoption=='y' || repeatoption == 'Y');
//     return 0;

// }
//! project 08
//? sum program. use for if/else loop. 

// #include <iostream>
// using namespace std;
// //Program begins from the main method
// int main()
// {
//     //Define variables
//     double inputNums;
//     //instruction ke oy 0
//     double sumOfPositiveNums=0;
//     double sumOfNegativeNums=0;
//     double totalOfAllNums=0;
//     //Readsten whole numbers 
//     cout<<" Enter any 10 numbers(whether positive, negative, or zero): "<<endl;
//     for(int i=0;i<10;i++)
//     {	
// 	    cin>>inputNums;
	    
// 	    totalOfAllNums +=inputNums ;
// 	   if(inputNums>0)//validate negative
//             sumOfPositiveNums += inputNums;
//        else 
// 	        sumOfNegativeNums += inputNums;
//     }
//     //Print sum of all positive numbers
//     cout<<"The sum of all the numbers greater than zero(all positive numbers): "
//          <<sumOfPositiveNums<<endl;
    
//     //Print sum of all negative numbers
//     cout<<"the sum of all the numbers less than zero (which will be a negative number or zero): "
//          <<sumOfNegativeNums<<endl;
//     //Print total sum of numbers
//     cout<<"The sum of all the numbers : "<<totalOfAllNums<<endl;

// }

//!project09
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
// while ( n > 10 || n < 1 ) {
// cin >> n;
// cout<<n;
// }

// }
//! Basic c++
//? Structure. struct. no need to call key word

// #include <iostream>
// #include <iomanip>

// using namespace std;

// struct studentlist{

//     int id;
//     string name;
//     string dob;
//     float score;
   
// };

// int main(){

//    studentlist st;// call struct and add name st(name ey kor ban)

//    //input
//    cout<<" Enter student ID= ";
//    cin>>st.id;
//    cout<<"Enter student name= ";
//    cin>>st.name;
//    cout<<"Enter student DOB= ";
//    cin>>st.dob;
//    cout<<"Enter student score= ";
//    cin>>st.score;

// //output
// cout<<"============================================================================\n";
// cout<<setw(20)<<"ID"<<setw(20)<<"Name"<<setw(20)<<"DOB"<<setw(20)<<"SCORE"<<endl; // setw(20) space 20
// cout<<setw(20)<<st.id<<setw(20)<<st.name<<setw(20)<<st.dob<<setw(20)<<st.score;
// }

//? OOP: rean create class

// #include<iostream>
// using namespace std;
// class box{
// public: // public is free to call
//     int id;
//     string name;
//     char gender;
// };

// int main(){
//     //create object
//     box x;
//     x.id=100;
//     x.name="hello";
//     x.gender='M';

//     cout<<"id= "<<x.id<<endl;
//     cout<<"name= "<<x.name<<endl;
//     cout<<"gender= "<<x.gender<<endl;
// }

// #include <iostream>
// using namespace std;
// class student{
// public:

// int code;
// string name;
// int age;
// }
// // object can create this place. laor bz global
// stu[10];
// int main(){
//     int n;

//     cout<<"input number of student= ";
//     cin>>n;

//     for (int i = 0; i < n; i++){
//         cout<<"Input["<<i+1<<"]\n";
//         cout<<"Input Code= ";
//         cin>>stu[i].code;
//         cout<<"Input name= ";
//         cin>>stu[i].name;
//         cout<<"Input age= ";
//         cin>>stu[i].age;
//     }
//     for (int i = 0; i < n; i++){

//         cout<<"ouput["<<i+1<<"]\n";
//         cout<<"The code is "<<stu[i].code<<endl;
//         cout<<"The name is "<<stu[i].name<<endl;
//         cout<<"The age is "<<stu[i].age<<endl;
//     }
// }
    
//? private

// #include <iostream>
// using namespace std;
// class box{
// private:// private tor create public, function method ng
//     int id;
//     string name;
//     char gender;
// public://
// //use setget
//     void setid(int id){
//         this ->id= id;
//     }
//     void setname(string name){
//         this ->name=name;
//     }
//     void setgender(char gender){
//         this ->gender=gender;
//     }
//     int getid(){
//         return id;

//     }
//     string getname(){
//         return name;
        
//     }
//     char getgender(){
//         return gender;
        
//     }
//     void input(){
//         cout<<"Input id= ";cin>>id;
//         cout<<"Input name= ";cin>>name;
//         cout<<"Input gender= ";cin>>gender;
//     }
    
//     void output(){
//         cout<<"======================="<<endl;
//         cout<<"ID= "<<id<<endl;
//         cout<<"Name= "<<name<<endl;
//         cout<<"Gender= "<<gender<<endl;
//     }
// };

// int main(){
//     box s;
//     // s.input();
//     // s.output();
//     s.setid(10000);
//     s.setname("hello everyone");
//     s.setgender('M');

//     cout<<" id is= "<<s.getid()<<endl;
//     cout<<" name is= "<<s.getname()<<endl;
//     cout<<" gender is= "<<s.getgender()<<endl;
// }

//? create private ot in class
// #include <iostream>
// #include <iomanip>
// using namespace std;
// class person
// {
// private:
//    int id;
//    string name;
//    string address;

// public:
//     void setID(int);
//     void setName(string);
//     void setAddress(string);
//     int getID();
//     string getName();
//     string getAddress();

//     void input();
//     void output();


// };

// void person::setID(int id){
//     this->id=id;

// }
// void person::setName(string name){
//     this->name=name;
    
// }
// void person::setAddress(string address){
//     this->address=address;
    
// }
// int person::getID(){
//     return id;
// }
// string person::getName(){
//     return name;
// }
// string person::getAddress(){
//     return address;
// }

// void person::input(){

//     cout<<"Input id= ";
//     cin>>id;
//     cout<<"Input name= ";
//     cin>>name;
//     cout<<"Input address= ";
//     cin>>address;
// }
// void person::output(){
//     cout<<setw(20)<<id<<setw(20)<<name<<setw(20)<<address<<endl;


// }
// int main(){
//     person p;
//     p.input();
//     p.output();

//     p.setAddress(11);
//     p.setName("Joe chea");
//     p.setID(10001);
//     p.output();

// }
//! Inheritance is a way to create a new class that depend on the class that already exist.
//! in this journey of class, we call exist class "Parent Class" and New class " Child class".
//! there are 2 type of Inheritance: Single Inheritance and Mutiple Inheritance.
//? ptay morodok pi knea
//? ah nis single inheritance
// #include <iostream>
// using namespace std;
 
// class food{//grandfather

// public:
//     void printfood(){
//         cout<<" this is class food\n";
//     }
// };//father
// class pizza:public food {
//     public:
//     void printpizza(){
//         cout<<"this is pizza\n";
//     }
// };//son 
//  class khmerfood: public pizza{
//     public:
//     void printkhmerfood(){
//         cout<<" this is class khmer food\n";
//     }
//  };
//  //baby
//  //? ah nis multiple inheritance
//  class a{
//     public:
//     void ina(){
//         cout<<"A";}
//     };
//     class b{
//     public:
//     void inb(){
//         cout<<"B";}
//     };
//     class c{
//     public:
//     void inc(){
//         cout<<"C";}
//     };
 
//  class child: public food, public pizza, public khmerfood{
//     public:
//     void ch(){
//         cout<<" hello";
//     }

//  };

// int main(){
//     food obj1;
//     obj1.printfood();
//     cout<<"=====\n";
//     pizza obj2;//use ban 2
//     obj2.printfood();
//     obj2.printpizza();
//     cout<<"=====\n";
//     khmerfood obj3; // use ban 3
//     obj3.printpizza();
//     obj3.printfood();
//     obj3.printkhmerfood();
//     child obj4;
//     cout<<"=====\n";
    
    
//     obj4.ina();
//     obj4.inb();
//     obj4.inc();
//     obj4.ch();
    
// }

//? exercise of inheritence
// #include <iostream>
// #include <iomanip>
// using namespace std;
// class person
// {
//     protected:
// int id;
// string name, address,email, phone;

// };
// class Account: public person{
//     private:
//     float hour, rate;
//     float salary;
//     public:
//     void input(){
//         cout<<"input id= "; cin>>id;
//         cout<<"input name= "; cin>>name;
//         cout<<"input address= "; cin>>address;
//         cout<<"input email= "; cin>>email;
//         cout<<"input hour= ";cin>>hour;
//         cout<<"input rate= ";cin>>rate;
//         salary=hour*rate;
    
//     }
//     void display(){
//         cout<<setw(20)<<id<<setw(20)<<name<<setw(20)<<address<<setw(20)<<email<<setw(20)<<hour<< setw(20)<<rate;
//     }
//     void header(){
//         cout<<"==================================================================================================================\n";
//         cout<<setw(20)<<"ID"<<setw(20)<<"name"<<setw(20)<<"address"<<setw(20)<<"email"<<setw(20)<<"hour"<< setw(20)<<"rate";
//         cout<<"===================================================================================================================\n";
//     }
// };
// int main(){
//     Account acc;
//     acc.input();
//     acc.header();

//     acc.display();
// }

//! constructor lesson
// #include <iostream>
// #include <iomanip>
// using namespace std;
// class box{
// private:
//     float l,w,h;
// public:
//     box();
//     box(float l, float w, float h);
//     float Area(){
//         return 2*(l*w+l*h+w*h);
//     }
//     float Volume{
//         return l * w * h;
//     }
//     void input(){
//         cout<<"Input L= "; cin>>l;
//         cout<<"Input W= "; cin>>w;
//         cout<<"Input H= "; cin>>h;
//     }
//     void output(){
//         cout<<setw(20)<<l<<setw(20)<<w<<setw(20)<<<<setw(20)<<h<<Area()<<setw(20)<<C=v=Volume()<<endl;
//     }
// };
// box::box(){
//     l=1;
//     w=2;
//     h=3;
// }
// int main(){

// }
#include <iostream>

