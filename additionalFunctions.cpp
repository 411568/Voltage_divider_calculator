#include "additionalFunctions.h"


bool isNumber(const std::string inStr)
{
	bool answer{ true };

	for (auto c : inStr)
	{
		if (isdigit(c) == false)
		{
			answer = false;
			break;
		}
	}

	return answer;
}
