#include "stats.h"
#include <numeric>

Stats Statistics::ComputeStatistics(const std::vector<float>& vec) {
    //Implement statistics here
	Stats value;
	
	if(vec.empty())
	{
		value.average = NaN;
		value.max 	  = NaN;
		value.min 	  = NaN
	}
	else
	{
		value.average = FindAverage(vec);
		value.max 	  = FindMax(vec);
		value.min 	  = FindMin(vec);	
	}
}

float Statistics::FindAverage(const std::vector<float>& vec)
{
	float sum = std::accumulate(vec.begin(), vec.end(), 0);
	if(sum == 0)
		return NaN;
	else
		return sum/static_cast<float>vec.size();
}

float Statistics::FindMax(const std::vector<float>& vec)
{
	return max_element(vec);
}

float Statistics::FindMin(const std::vector<float>& vec)
{
	return min_element(vec);
}