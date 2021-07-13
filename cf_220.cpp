#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
    int *harr;
    int cap;
    int sz;

public:
    MinHeap(int cap);
    void minHeapify(int i);
    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    int extractMin();
    void decreaseKey(int i, int new_val);
    int getMin() { return harr[0]; }
    void deleteKey(int i); //delete key stored i;
    void insertKey(int k);
};

MinHeap::MinHeap(int cap)
{
    sz = 0;
    cap = cap;
    harr = new int[cap];
}

void MinHeap::insertKey(int k)
{
    if (sz == cap)
    {
        cout << "heap overflow" << endl;
        return;
    }
    int i = sz;
    harr[sz] = k;
    sz++;

    //fixiing minheap property if violated
    while (i != 0 && harr[parent(i)] > harr[i])
    {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

void MinHeap::decreaseKey(int i, int new_val)
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i])
    {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

int MinHeap::extractMin()
{
    if (sz <= 0)
        return INT_MAX;
    if (sz == 1)
    {
        sz--;
        return harr[0];
    }
    int r = harr[0];
    harr[0] = harr[sz - 1];
    sz--;
    minHeapify(0);
    return r;
}

void MinHeap::deleteKey(int i)
{
    decreaseKey(i, INT_MIN);
    extractMin();
}

void MinHeap::minHeapify(int i)
{
    int l = leftChild(i);
    int r = rightChild(i);
    int smallest = i;
    if (l < sz && harr[l] < harr[i])
    {
        smallest = l;
    }
    if (r < sz && harr[r] < harr[smallest])
    {
        smallest = r;
    }
    if (smallest != i)
    {
        swap(harr[i], harr[smallest]);
        minHeapify(smallest);
    }
}
int main()
{

    return 0;
}