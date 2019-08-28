#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v1;
void Print(vector<int> v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}


template<class T>
void SelectionSort(vector<T> &v1) {
	for (vector<int>::iterator it1 = v1.begin(); it1 != (v1.end()-1); it1++) {
		vector<int>::iterator index = it1;

		vector<int>::iterator it2=(it1+1);
		for (; it2 != v1.end(); it2++) {
			if (*index > *it2)
				index = it2;
	
		}
		int tmp = *it1;
		*it1 = *index;
		*index = tmp;
	}
}


void InsertSort(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		if (v1.empty())
			v1.push_back(*it);
		else {
			for (vector<int>::iterator it1 = v1.begin(); it1 != v1.end(); it1++) {
				if (*it <= *it1 && it1 == v1.begin())
				{
					v1.insert(it1, *it);
					break;
				}
				else if (*it >= *it1 && it1 == (v1.end() - 1))
				{
					v1.insert(v1.end(), *it);
					break;
				}
				else if (*it >= *it1 && *it <= *(it1 + 1))
				{
					v1.insert(it1 + 1, *it);
					break;
				}
			}
		}

	}
	
}


void Merge(int a[], int l, int mid, int r) {
	int* left = new int[mid - l];
	int* right = new int[r - mid + 1];
	for (int i = l; i < mid; i++)
		left[i-l] = a[i];
	for (int i = mid; i <= r; i++) {
		right[i - mid] = a[i];
	}
	int i = 0; int j = 0; int k = l;
	while (i < mid - l && j < r - mid + 1) {
		if (left[i] < right[j])
			a[k++] = left[i++];
		else
			a[k++] = right[j++];
	}
	while (i < mid - l)
	{
		a[k++] = left[i++];
	}
	while (j < r - mid + 1)
		a[k++] = right[j++];
}


void MergeSort(int a[],int l,int r) {
	if (l == r)
		return;
	else {
		int mid = (l + r) / 2;
		MergeSort(a, l, mid);
		MergeSort(a, mid + 1, r);
		Merge(a, l, mid+1, r);
	}
}


enum DAY { MON = 1, TUE, WED, THU, FRI, SAT, SUN };


void AAA()
{
	int x = 10, y = 20, z = 30;
enum DAY yesterday = MON, today = TUE, tomorrow = WED;
	printf("%d %d %d \n", yesterday, today, tomorrow);

}

struct Queen {
	int x; int y;
	Queen(int xx, int yy) :x(xx), y(yy) {};

};

int main() {
	/*vector<int> v = {5,3,8,2,7};
	Print(v);
	//SelectionSort(v);
	//InsertSort(v);
	MergeSort(v);
	Print(v);
	*/
	/*int a[5] = { 1,9,8,5,7 };
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << endl;
	MergeSort(a, 0, 4);
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";*/
	//AAA();
	Queen q(0, 0);
	stack<Queen>solu;
	q.x++;
	solu.push(q);
	Queen q2(0, 0);
		q= solu.pop();

}
