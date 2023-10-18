#include "StringModule.h"
#include <string>

namespace CppKatas
{
	class StringModule
	{
		std::string greeting = "Hello";

	public:

		StringModule() {

		}

		std::string AddStrings(std::string appendValue)
		{
			return greeting;
		}
	};
}
