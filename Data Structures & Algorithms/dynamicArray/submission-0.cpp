
class DynamicArray {

int* x;
int cap;
int length;

public:

    DynamicArray(int capacity) {
        x=new int[capacity];
        cap=capacity;
        length=0;
    }

    int get(int i) {
        return x[i];
    }

    void set(int i, int n) {
        x[i]=n;
    }

    void pushback(int n) {
        if(length==cap){
            resize();
         }

        x[length]=n;
        length++;

    }

    int popback() {
        if(length>0) length--;
        return x[length];
    }

    void resize() {
        cap*=2;
        int* y =new int[cap];
        for(int i=0;i<length;y[i]=x[i],i++);
        delete[] x;
        x=y;

    }

    int getSize() {
        return length;
    }

    int getCapacity() {
          return cap;
    }
};
