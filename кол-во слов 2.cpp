#include <iostream>

int main()
{
    int count_words(std::string);

    std::string input_text;
    std::cout << "Enter a text: ";
    std::getline(std::cin, input_text);

    std::cout << "Number of words: " << count_words(input_text) << std::endl;
    return 0;
}
int count_words(std::string input_text)
{
    int number_of_words = 1;
    for (int i = 0; i < input_text.length(); i++)
        if (input_text[i] == ' ')
            number_of_words++;
    return number_of_words;
}