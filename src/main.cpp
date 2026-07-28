#include <iostream>
#include <fstream>

int main()
{   
    const int image_width = 400;
    const int image_height = 200;

    double red_percentage, green_percentage;

    int red, green;

    std::ofstream outfile("images/image.ppm");
    if (!outfile) {
        std::cerr << "Failed to create a file!" << std::endl;
        return 1;
    }

    outfile << "P3\n";
    outfile << image_width << ' ' << image_height << '\n';
    outfile << "255\n";
    
    int counter = 0;
    for (int y = image_height - 1; y >= 0; y--)
    {
        for(int x = 0; x < image_width; x++)
        {
            red_percentage = double(x) / (image_width - 1);
            green_percentage = double(y) / (image_height - 1);

            red = red_percentage * 255;
            green = green_percentage * 255;

            outfile << red << ' ' << green << ' ' << 0 << '\n';


        }
    
    }

    // outfile.close();
    return 0;
}