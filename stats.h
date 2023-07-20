#include <vector>
#include <math>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    
	struct Stats
	{
		float average;
		float max;
		float min;
	};
	
    Stats ComputeStatistics(const std::vector<float>&);
	float FindAverage(const std::vector<float>&);
	float FindMax(const std::vector<float>&);
	float FindMin(const std::vector<float>&);	
}
