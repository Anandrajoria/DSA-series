#include<iostream>
using namespace std;
int sum_in_range(int x, int y){
	int result=0;

	for(int i=x;i<=y;i++){
		result+=i;
	}
	return result;
}

int sum_in_range_optimize(int x,int y){
	int n=(y-x+1);
	int a=x;
	int result=(n*(2*a + (n-1)*1))/2;
	return result;
}
int main()
{
	cout<<sum_in_range_optimize(1,200000);
	return 0;
}


/*
Asymptotic analysis is a method used in computer science to describe the behavior of algorithms as the input size grows large. It helps us understand the efficiency of an algorithm in terms of time and space complexity, ignoring constant factors and lower-order terms.

The most common notations used in asymptotic analysis are:

- **Big O (O)**: Describes the upper bound of the running time. It gives the worst-case scenario.
- **Omega (Ω)**: Describes the lower bound. It gives the best-case scenario.
- **Theta (Θ)**: Describes the tight bound. It gives both the upper and lower bounds.

For example, in your code:

- The function `sum_in_range` uses a loop from `x` to `y`, so its time complexity is **O(n)**, where `n = y - x + 1`.
- The function `sum_in_range_optimize` uses a direct formula, so its time complexity is **O(1)** (constant time).

Asymptotic analysis helps compare algorithms and choose the most efficient one for large inputs.

*/

/*
Hidden Feature:
Let's add a function that appears efficient but actually hides a costly operation, illustrating how asymptotic analysis helps reveal true performance.

Example:
Suppose we have a function that always sorts a small array before returning a constant value. For small arrays, the cost is negligible, but if the array size grows, the hidden cost becomes significant.

*/

#include <vector>
#include <algorithm>
using namespace std;
// Hidden costly operation: sorts the range before returning the sum
int sum_with_hidden_sort(int x, int y) {
	vector<int> arr;
	for (int i = x; i <= y; ++i) {
		arr.push_back(i);
	}
	sort(arr.begin(), arr.end()); // O(n log n) hidden cost
	int result = 0;
	for (int val : arr) {
		result += val;
	}
	return result;
}
int main()
{
	cout<<sum_with_hidden_sort(1,20000);
	return 0;
}

/*
Tricky Example:
Let's compare the performance of all three functions for different input sizes.
For small n, the difference may not be noticeable, but for large n, the hidden cost in sum_with_hidden_sort becomes apparent.

Try running:
	cout << sum_with_hidden_sort(1, 10) << endl;      // Small n
	cout << sum_with_hidden_sort(1, 100000);          // Large n

Asymptotic analysis helps us see that sum_with_hidden_sort is O(n log n), sum_in_range is O(n), and sum_in_range_optimize is O(1).
This demonstrates why understanding hidden operations and their complexities is crucial for writing efficient code.
*/

/*
he unnecessary step is arranging the books alphabetically. You don't need the books to be in any special order to count their total pages. You can just go through the stack as it is.

In the code, the line that does this unnecessary work is:
sort(arr.begin(), arr.end());

This command sorts the list of numbers.

For a small list (like numbers 1 to 10), this step is so fast you won't even notice it.

For a huge list (like numbers 1 to 100,000), sorting becomes a very slow and expensive operation.

The point of the example is that this sort function is a "hidden" problem. It makes the code much slower than it needs to be, but you might not realize it until you give it a large amount of data.

A much faster way would be to just add the numbers without sorting them first. The fastest way of all would be to use a math formula to get the answer instantly.

This is why developers analyze code: to find these hidden slow-downs that can cause problems later.
*/