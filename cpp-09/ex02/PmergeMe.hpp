#ifndef PMERGEME_H
# define PMERGEME_H

#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>
#include "Colour.hpp"
class PmergeMe
{
private:
	std::vector<int> vector_;
	std::deque<int>	deque_;

public:
	PmergeMe();
	PmergeMe(const PmergeMe & origin);
	PmergeMe & operator=(const PmergeMe & origin);
	~PmergeMe();

	void	ft_sort(char **tab);
	void	printVector();
	void	printDeque();

	template< typename T >
	void	merge_sort(T & deque_, int beg, int end) {
		int mid;
		if (beg<end)  
		{
			mid = (beg+end)/2;  
			merge_sort(deque_, beg, mid);  
			merge_sort(deque_, mid+1, end);  
			merge_insert(deque_, beg, mid, end);  
		}
	}

	template< typename T >
	void	merge_insert(T & deque_, int left, int mid, int right)  {  
		std::vector<int> temp(right - left + 1);
		int i = left, j = mid+1, k = 0;
		while (i <= mid && j <= right) {
			if (deque_[i] <= deque_[j]) {
				temp[k++] = deque_[i++];
			} else {
				temp[k++] = deque_[j++];
			}
		}
		while (i <= mid) {
			temp[k++] = deque_[i++];
		}
		while (j <= right) {
			temp[k++] = deque_[j++];
		}

		for (int p = 0; p < k; p++) {
			deque_[left+p] = temp[p];
		}
	}
};

#endif