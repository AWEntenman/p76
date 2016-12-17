// compute the number of partitions of n
//

#include "stdafx.h"

using namespace std;


long long partitions(int n)
{
	//
	//Set up the variables
	//
	int deficit = 0;
	int climit = n;
	int ptr = 0;
	long long count = 0;
	int part[maxInt];
	//initialize the partition array
	part[0] = n;
	for (int i = 1; i < maxInt; i++) part[i] = 0;
	//
	// Main Loop
	for ( ; ; )
	{
		--part[ptr];
		++deficit;
		climit = part[ptr];
		if (part[0]==0)
		{
			return count;
		}
		if (part[ptr]==0)
		{
			--ptr;
			continue;
		}
		while (deficit>climit)
		{
			++ptr;
			part[ptr] = climit;
			deficit -= climit;
		}
		++ptr;
		part[ptr] = deficit;
		deficit = 0;
		++count;
	}
}
