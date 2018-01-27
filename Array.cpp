// $Id: Array.cpp 820 2011-01-17 15:30:41Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"

//This function creates a new default array
Array::Array (void)
{
    string *ptr = NULL;
    int n;
    cin >> n;
    ptr= new ary[n];
}

//This function creates an array of a particular length
Array::Array (size_t length)
{
    string *ptr =NULL;
    cin>>length;
    ptr =new ary[length];

}

//This function fills up an array of a particular size
Array::Array (size_t length, char fill)
{
    int i;
    //create new array of size length
    string *ptr=NULL;
    cin>>length;
    ptr=new ary[length];
    //Or use function Array(length)

    //begin to fill array
    for(i=0; i<length; i++){
        ary[i]=fill;
    }

}

//This function copies a given array
Array::Array (const Array & array)
{
    int n;
    const *ptr=NULL;
    ptr=new ary[n];

    ary[n]=array;
    return ary[n];

}

//deletes a created array
Array::~Array (void)
{
    ptr= delete ary[n];

}

const Array & Array::operator = (const Array & rhs)
{

}

//
char & Array::operator [] (size_t index)
{

}

//
const char & Array::operator [] (size_t index) const
{

}

//Gets a max size of the array
char Array::get (size_t index) const
{

}

//sets a new character to a certain index in the array
void Array::set (size_t index, char value)
{
    //create a new array
    char *ptr=NULL;
    ptr=new ary[index];

    //set the new value to the specified index
    ary[index]=value;

}

//resizes the array
void Array::resize (size_t new_size)
{
    //first create an empty array with the new size

    //then copy old data into the new array

    //I am not sure if the array should not shrink.
    //If it is ok to shrink the array might use the shrink funct
    //on final copy

}

//Finds a specified character in the array
int Array::find (char ch) const
{
    int i=0;
    //compare the indexed array value to the character given
    while(strcmp(ary[i],ch) !=0){
        i++;
    }

}

//finds the character at the start of the array
int Array::find (char ch, size_t start) const
{

}

bool Array::operator == (const Array & rhs) const
{

}

bool Array::operator != (const Array & rhs) const
{

}

//fills array with a specified character
void Array::fill (char ch)
{

}

//shrinks array size
void Array::shrink (void)
{

}

//reverses the order of the array
void Array::reverse (void)
{
    int n;
    int i, j;
    string ary[n];
    //create new array and fill it
    ary[n]=Array(length,fill);

    //begin reversing array.
    //My logic behind coding this is a basic swap algorithm
    //You take the start and swap it with the end then keep going
    //inward until you reach the middle of the array
    for(i=0; i<length; i++){
        for(j=length; j==i; j++){
            newEle=ary[i];
            ary[i]=ary[j];
            ary[j]=newEle;
        }
    }



}


void Array::slice (size_t begin)
{

}

//splits array down the middle
void Array::slice (size_t begin, size_t end)
{

}
