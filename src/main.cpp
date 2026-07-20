#include <iostream>
#include <fstream>

int main()
{   
    const int image_width = 400;
    const int image_height = 200;

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
        for(int x = image_width - 1; x >= 0; x--)
        {
            outfile << "255 0 0\n";
            std:: cout << counter++ << std::endl;
        }
    
    }

    // outfile.close();
    return 0;
}