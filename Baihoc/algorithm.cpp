#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;

// Algorithm function in STL
// min
// max
// min_element - min trong mang or vector
// max_element
// accumulate - tinh tong cac phan tu trong cac mang or cac vector
// swap
// sort
// stable_sort vi du mang kieu -1 3 1 -1 -2 -3 -> sort -1 1 -1 -2 3 ->stable sort 
// find - co the ap dung cho mang chua co thu tu
// binary_search - mang or vecto,set ,map co thu tu
// lower_bound tt nhu bns
// -> lb: tra ve con tro hoac la iterators phtu dau tien >= x trong mang
// upper_bound tt nhu bns
//-> tra ve vi tri phan tu dau tien > x
// memset gan all gia tri trong mang thanh 0 or -1, chi 2 gtri nay thoi
// fill - gan cac phtu trong mang or vecto thanh gia tri nao do
// merge - nhu cai ten, gop hoac tron hai mang, luu y mang phai tang dan
// reverse - lat nguoc cai mang or vector
// set_union -> giong nhu hop cac tap hop thoi
// set_intersection -> giong nhu giao cac tap hop
// set_difference -> kieu giong nhu b hop voi (a giao b) 
// set_symmetric_difference

bool cmp(int a, int b){
	return abs(a) < abs(b);
}

int main(){
	// max, min
    cout << min(2, 4) << endl;
    cout << max (3, 5) << endl;
	// max,min element
    int a[5] = {1, 2 ,4, 6, 8};
    cout << *min_element(a, a + 5) << endl;
    // accmumulate
    int sum = accumulate(a, a + 5, 0); // a + x, a + y + 1
    cout << sum << endl;
	// swap
    int x = 100, y = 200;
    swap(x, y);
    cout << x << " " << y << endl;
   	// sort
    int th[5] = {1, 2, 5, 6, 9};
    sort(a, a + 5); // a + x, a + y + 1
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;
    
	vector<int> b = {1, 4, 3, 2, 5};
	sort(begin(b), end(b), greater<int>());
	for (int g : b){
		cout << g << " ";
	}
	cout << endl;
	string l[5] = {"kktron", "python", "AI", "Data", "C++"};
	sort(l, l + 5, greater<string>());
	for (string ele : l){
		cout << ele << " ";
	}
	cout << endl;
	// stable sort
	int z[6] = {-1, 3, 1, -1, -2, -3};
	stable_sort(z, z + 6, cmp);
	for (int o : z){
		cout << o << " ";
	}
	cout << endl;
	//find O(n)
	int k[5] = {1, 2, 1, 3, 5};
	auto it = find(a, a + 5, 0);
	if (it == a + 5){
		cout << "Not found!" << endl;
	}
	else {
		cout << "Found\n";
	}
	
	vector<int> h = {1, 2 , 2, 4, 6};
	auto siu = find(h.begin(), h.end(), 5);
	if (siu == b.end()){
		cout << "Not found!\n";
	} else {
		cout << "Found\n";
	}
	// binary search O(logn)
	int sx[5] = {1, 2, 3, 4, 5};
	if (binary_search(a, a + 5, 2)){
		cout << "Found!\n";
	} else {
		cout << "Not found!\n";
	}
	
	vector<int> mmb = {1, 1, 2, 3, 5};
	if (binary_search(begin(mmb), end(mmb), 1)){
		cout << "Found!\n";
	} else {
		cout << "Not found!\n";
	}
	//lower bound
	int f[6] = {1, 2, 2, 2, 3, 4};
	auto bmg = lower_bound(f, f + 6, 2);
	cout << *bmg << endl;
	cout << (bmg - f) << endl;
	
	vector<int> vcl = {1, 2, 2, 2, 3, 4};
	auto sech = lower_bound(begin(vcl), end(vcl), 2);
	cout << *sech << endl;
	cout << (sech - begin(vcl)) << endl;
	//upper bound
	int t[6] = {1, 2, 2, 2, 3, 4};
	auto msb = upper_bound(t, t + 6, 2);
	cout << *msb << endl;
	cout << (msb - t) << endl;
	
	vector<int> hcuu = {1, 2, 2, 2, 3, 4};
	auto bul = upper_bound(begin(hcuu), end(hcuu), 2);
	cout << *bul << endl;
	cout << (bul - begin(hcuu)) << endl;
	//memset gan all gia tri trong mang thanh 0 or -1, chi 2 gtri nay thoi
	int buon[5] = {1, 2, 3, 4, 5};
	memset(buon, 0, sizeof(buon));
	for (int nua : buon) {
		cout << nua << " ";
	}
	cout << endl;
	//fill
	vector<int> kala(10);
	fill(kala.begin(), kala.end(), 1000);
	for (int tiep : kala){
		cout << tiep << " ";
	}
	cout << endl;
	//merge
	vector<int> haiz = {1, 2, 3, 3, 4};
	vector<int> hic = {1, 1, 2, 5, 10, 15};
	vector<int> res(11);
	merge(haiz.begin(), haiz.end(), hic.begin(), hic.end(), res.begin());
	for (int dmm : res){
		cout << dmm << " ";
	}
	cout << endl;
	//reverse
	int rv[5] = {1, 2, 3, 4, 5};
	reverse(rv, rv + 5);
	for (int embotoi : rv){
	cout << embotoi << " ";
	}
	cout << endl;
	string sth = "coayconguoikhacroi";
	reverse(begin(sth), end(sth));
	cout << sth << endl;
	// set_union -> giong nhu hop cac tap hop thoi
	// set_intersection -> giong nhu giao cac tap hop
	// set_difference -> kieu giong nhu b hop voi (a giao b) 
	int a1[] = {1, 2, 3, 4, 5};
	int a2[] = {1, 4 ,3, 5, 6, 7}; // phai sort cac mang or vector trc
	vector<int> u(11);
	auto ite = set_union(a1, a1 + 5, a2, a2 + 6, u.begin());
	// thay set_union thanh set_intersection or set_difference la dc
	u.resize(ite - u.begin());
	for (int messi : u){
		cout << messi << " ";
	}
	cout << endl;
	
}
