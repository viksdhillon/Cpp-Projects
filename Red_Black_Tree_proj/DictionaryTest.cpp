/***
 * Vik Dhillon
 * vsdhillo
 * 2025 Winter CSE101 PA8
 * DictionaryTest.cpp
 * Test file for the Dictionary ADT
 ***/
#include "Dictionary.h"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main()
    {
//     string S[] =   { // words to insert
//         "plaices",
//         "ambusher",
//         "crosby",
//         "wattles",
//         "pardoner",
//         "pythons",
//         "second",
//         "forms",
//         "impales",
//         "pic",
//         "verticals",
//         "recriminator",
//         "depressants",
//         "cul",
//         "potables",
//         "norm",
//         "reinsurer",
//         "deschooler",
//         "recoining",
//         "dissocialised",
//         "cohabit",
//         "hemiolia",
//         "cantling",
//         "glamorized",
//         "millesimal",
//         "glagolitic"
//      };
// string T[] =   { // words to delete
//         "second",
//         "forms",
//         "impales",
//         "pic",
//         "verticals",
//         "recriminator",
//         "depressants",
//         "cul",
//         "potables",
//         "norm",
//         "reinsurer",
//         "deschooler",
//         "recoining",      
//      };

// Dictionary A;
// Dictionary B;

// cout << endl;

// // insert some pairs into A
// for(int i=0; i<26; i++){
// A.setValue(S[i], i+1);
// }

// // call operator=()
// B = A;

// B.setValue("deschooler", 101);
// B.setValue("reinsurer", 102);
// B.setValue("glagolitic", 103);
// B.setValue("cul", 104);
// B.setValue("ambusher", 105);

// // call copy constructor
// Dictionary C = B;

// cout << "A.size() = " << A.size() << endl  << A << endl;
// cout << "B.size() = " << B.size() << endl  << B << endl;
// cout << "C.size() = " << C.size() << endl  << C << endl;

// // check copy constructor
// cout << "copy constructor creates identical trees: " << endl;
// cout << ((C.pre_string()==B.pre_string())?"true":"false") << endl;
// cout << endl;

// // check operator==()
// cout << "A==B is " << (A==B?"true":"false") << endl;
// cout << "B==C is " << (B==C?"true":"false") << endl;
// cout << "C==A is " << (C==A?"true":"false") << endl << endl;

// // perform alterations on A
// cout << "A.getValue(\"hemiolia\") = " << A.getValue("hemiolia") << endl;
// A.getValue("hemiolia") *= 10; // change the value associated with "hemiolia"
// cout << "A.getValue(\"hemiolia\") = " << A.getValue("hemiolia") << endl << endl;

// // check state of A
// cout << "A.size() = " << A.size() << endl  << A << endl;
// cout << "A pre-order: " << endl << A.pre_string() << endl;

// // remove some pairs from A
// for(int i=0; i<13; i++){ 
// A.remove(T[i]);
// }

// // check state of A
// cout << "A.size() = " << A.size() << endl  << A << endl;
// cout << "A pre-order: " << endl << A.pre_string() << endl;

// // do forward iteration on B
// cout << "forward iteration on B, changing values:" << endl;
// for(B.begin(); B.hasCurrent(); B.next()){
// cout << "("+B.currentKey()+", " << B.currentVal() << ") ";
// B.currentVal()++;  // change value
// cout << "("+B.currentKey()+", " << B.currentVal() << ")\n";
// }
// cout << endl;

// // do reverse iteration on C
// cout << "reverse iteration on C, changing values" << endl;
// for(C.end(); C.hasCurrent(); C.prev()){
// cout << "("+C.currentKey()+", " << C.currentVal() << ") ";
// C.currentVal()++;  // change value
// cout << "("+C.currentKey()+", " << C.currentVal() << ")\n";
// }
// cout << endl;

// // check exceptions
// cout << "test pre-condition errors:" << endl;
// try{
// A.getValue("blah");
// }catch(logic_error& e){
// cout << e.what() << endl;
// cout << "   continuing without interruption" << endl;
// }
// try{
// A.remove("blah");
// }catch(logic_error& e){
// cout << e.what() << endl;
// cout << "   continuing without interruption" << endl;
// }
// try{
// A.currentKey();
// }catch(logic_error& e){
// cout << e.what() << endl;
// cout << "   continuing without interruption" << endl;
// }
// try{
// A.currentVal();
// }catch(logic_error& e){
// cout << e.what() << endl;
// cout << "   continuing without interruption" << endl;
// }  
// try{
// A.next();
// }catch(logic_error& e){
// cout << e.what() << endl;
// cout << "   continuing without interruption" << endl;
// }
// try{
// A.prev();
// }catch(logic_error& e){
// cout << e.what() << endl;
// cout << "   continuing without interruption" << endl;
// }
// cout << endl;  

// return( EXIT_SUCCESS );
    Dictionary A;
    string ideal1 = "d\nb\nc (RED)\nf\ne (RED)\ng (RED)\n";
    string ideal2 = "e\nb\nc (RED)\nf\ng (RED)\n";
    string ideal3 = "e\nb\nc (RED)\nf\n";
    // string ideal2 = "c\nb\nf\ne (RED)\ng (RED)\n";
    // string ideal3 = "c\nb\nf\ne (RED)\n";
    A.setValue("d", 1);
    A.setValue("b", 5);
    A.setValue("a", 10);
    A.setValue("c", 15);
    A.setValue("f", 20);
    A.setValue("e", 25);
    A.setValue("g", 30);
    A.begin();
    A.remove("a");
    cout << A.pre_string() << endl;
    cout << endl;
    cout << endl;
    cout << ideal1 << endl;
    if (A.pre_string() != ideal1)
      return 12;

}
