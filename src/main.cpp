#include "vec3.hpp"
#include "color.hpp"

#include <iostream>

int main()
{
	const int image_width = 256;
	const int image_height = 256;

	//Render
	std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";


	for (int j = image_height - 1; j >=0; --j) {
		std::cerr << "\rScanLines Remaining: " << j << ' ' << std::flush;
		for (int i = 0; i < image_width; ++i) {
			color3 pixel_color(
					double(i)/(image_width - 1),
					double(j)/(image_height - 1),
					0.25
					);
			write_color(std::cout, pixel_color);
		}
	}
	std::cerr << "\nDone.\n";
}