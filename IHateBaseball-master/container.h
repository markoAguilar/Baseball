#ifndef CONTAINER_H
#define CONTAINER_H

template <class T>
class container
{
public:
    container();
    virtual ~container(){delete [] _v;}
    virtual void add(T item);
    void remove(int index);
    int getSize();
    T& at(int index);

    container& operator = (const container& other);
    T& operator [](int index);
private:
    int _capacity;      //capacity of templated dynamic array
    int _size;          //size of templated dynamic array
    T* _v;              //the dynamic array to hold items
};
/*******************************************************************************
* container
*   This class is to store all container functions and it is templated to hold
*       any object/item.
*******************************************************************************/



/*******************************************************************************
*
* Method container()
* ______________________________________________________________________________
* This method intializes capacity,size,and creates a dynamic array for any item
* ______________________________________________________________________________
* PRE-CONDITIONS
*   none
* ______________________________________________________________________________
* POST-CONDITIONS
*   none
*******************************************************************************/
template <class T>
container<T>::container(){
    _capacity = 10;
    _size = 0;
    _v = new T[_capacity];
    *_v = T();
}
/*******************************************************************************
*
* Method add(T item)
* ______________________________________________________________________________
* This method adds items to the container
* ______________________________________________________________________________
* PRE-CONDITIONS
*   none
* ______________________________________________________________________________
* POST-CONDITIONS
*   none
*******************************************************************************/
template <class T>
void container<T>::add(T item){
    _v[_size] = item;
    _size++;

    if(_size == _capacity){
        _capacity*=2;
        T* temp = _v;
        _v = new T[_capacity];
        for (int i = 0; i < _size; i++){
            _v[i] = temp[i];
        }
        delete [] temp;
    }
}
/*******************************************************************************
*
* Method remove(int index)
* ______________________________________________________________________________
* This method removes a item from a index in the dynamic array
* ______________________________________________________________________________
* PRE-CONDITIONS
*   none
* ______________________________________________________________________________
* POST-CONDITIONS
*   none
*******************************************************************************/
template <class T>
void container<T>::remove(int index){
    for (int i = index; i < _size; i++){
        _v[i] = _v[i+1];
    }
    _size--;

    if (_size < _capacity/4){
        T* temp = _v;
        _capacity /=2;
        _v = new T[_capacity];
        for (int i = 0; i < _size; i++){
            _v[i] = temp[i];
        }
        delete [] temp;
    }
}
/*******************************************************************************
*
* Method getSize()
* ______________________________________________________________________________
* This method returns the size of the dynamic array
* ______________________________________________________________________________
* PRE-CONDITIONS
*   none
* ______________________________________________________________________________
* POST-CONDITIONS
*   returns the size of array
*******************************************************************************/
template <class T>
int container<T>::getSize(){
    return _size;
}
/*******************************************************************************
*
* Method operator [](int index)
* ______________________________________________________________________________
* This method overloads the [] to return an item at a index inputted.
* ______________________________________________________________________________
* PRE-CONDITIONS
*   none
* ______________________________________________________________________________
* POST-CONDITIONS
*   return item at a certain index in array
*******************************************************************************/
template <class T>
T& container<T>::operator [](int index){
    return _v[index];
}
/*******************************************************************************
*
* Method operator = (const container& other)
* ______________________________________________________________________________
* This method overloads assignment operator to assign current array to other
* ______________________________________________________________________________
* PRE-CONDITIONS
*   none
* ______________________________________________________________________________
* POST-CONDITIONS
*   return current array
*******************************************************************************/
template <class T>
container<T>& container<T>::operator = (const container& other){
    this->_v = new T[other._capacity];
    for (int i = 0; i < other._size; i++){
        this->_v[i] = other._v[i];
    }
    this->_size = other._size;
    this->_capacity = other._capacity;
    return *this;
}

/*******************************************************************************
*
* Method at(int index)
* ______________________________________________________________________________
* This method return item at a certain index
* ______________________________________________________________________________
* PRE-CONDITIONS
*   none
* ______________________________________________________________________________
* POST-CONDITIONS
*   return item at index
*******************************************************************************/
template <class T>
T& container<T>::at(int index){
    return _v[index];
}




#endif // CONTAINER_H
