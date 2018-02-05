// $Id: Array.cpp 820 2011-01-17 15:30:41Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"

//This function creates a new default array
Array::Array (void)
{
     new this;
}

//This function creates an array of a particular length
Array::Array (size_t length)
{
    max_size_=length;

}

//This function fills up an array of a particular size
Array::Array (size_t length, char fill)
{
    this->operator[](length)=fill;

}

//This function copies a given array
Array::Array (const Array & array)
{
    this=array;
}

//deletes a created array
Array::~Array (void)
{
    delete this;
}

const Array & Array::operator = (const Array & rhs)
{
	if(this->operator[] == rhs)
		return this;

}

//
char & Array::operator [] (size_t index)
{
    //explains itself
	cur_size_ = index;
    return this;

}

//
const char & Array::operator [] (size_t index) const
{
    cur_size_ = index;
    return this;
}

//Gets a specific indexed value of an array
char Array::get (size_t index) const
{
    //set current indexed size
    cur_size_= index;

    //return the value found
    return *data_;

}

//sets a new character to a certain index in the array
void Array::set (size_t index, char value)
{
    // Change the index value
    cur_size_=index;
    //and finally set the indexed value
    data_ = value;
}

//resizes the array
void Array::resize (size_t new_size)
{
	char *ptr;
	char temp;
	//check if new size is larger than previous size
	if (new_size > max_size_) {
		//add the amount of new elements
			size_t diff_size;
			diff_size = new_size - max_size_;
			cur_size_ = max_size_;
			while (diff_size != 0) {
				
				cur_size_++;
			}
	//check if new size is smaller than previous
	}
	else if (new_size < max_size_) {
		//delete characters at the end of the array until reached new max size
		size_t diff_size2;
		diff_size2 = max_size_ - new_size;
		cur_size_ = max_size_;
		while (diff_size2 != 0) {
			delete this->operator[](cur_size_);
			cur_size_--;
		}
	}//if new size is the samee
	else {
		//do nothing to array
	}

}

//Finds a specified character in the array
int Array::find (char ch) const
{
    int i=0;
    //compare the indexed array value to the character given
    while(strcmp(this->operator[](i), ch) !=0){
        i++;
    }
    return i;

}

//finds the character at the start of the array
int Array::find (char ch, size_t start) const
{
	int i = 0;
	while (strcmp(ch,data_) != 0) {
		cur_size_ = start;
		start++;
		i++;
	}

	return i;
}

bool Array::operator == (const Array & rhs) const
{
    if(this->operator[] & rhs)
        return 1;
    else
        return 0;

}

bool Array::operator != (const Array & rhs) const
{
    if(this->operator[]!= rhs){
        return 1;
    }else{
        return 0;
    }

}

//fills array with a specified character
void Array::fill (char ch)
{
	this->operator[](cur_size_) = ch;

}

//shrinks array size
void Array::shrink (void)
{


}

//reverses the order of the array
void Array::reverse (void)
{
    int i, j;

    //begin reversing array.
    //My logic behind coding this is a basic swap algorithm
    //You take the start and swap it with the end then keep going
    //inward until you reach the middle of the array
    for(i=0; i<max_size_; i++){
        for(j=length; j==i; j++){
            newEle=ary[i];
            ary[i]=ary[j];
            ary[j]=newEle;
        }
    }



}


void Array::slice (size_t begin)
{
	size_t *prt;
	ptr = begin;
}

//makes shallow copy of array
void Array::slice (size_t begin, size_t end)
{

}
