#ifndef SOLUTION_H
#define SOLUTION_H

#include <algorithm>
#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>

enum class CitationType
{
    WebPage,
    Article
};

class Citation
{
public:
    Citation(const std::string& title, int year)
        : _title(title), _year(year)
    {
    }

    virtual ~Citation() {}
    virtual void printCitation(std::ostream& ostr) const = 0;
    // task 3 function included here

protected:
    std::string _title;
    int _year;
};

// example 1 - Web Page
// you will need to modify it
class WebPage : public Citation
{
public:
    WebPage(const std::string& title, int year, const std::string& url)
        : Citation(title, year),
          _url(url)
    {
    }

    void printCitation(std::ostream& ostr) const override
    {
        ostr << "Title: " << _title << std::endl;
        ostr << "Year: " << _year << std::endl;
        ostr << "URL: " << _url << std::endl;
    }

protected:
    std::string _url;
};


// example 2 - Book
// included only as an example, not used in the tasks
// class Book : public PublishedWork
// {
// public:
//     Book(const std::string& title, int year, const std::string& firstname, const std::string& lastname, const std::string& publisher)
//         : PublishedWork(title, year, firstname, lastname),
//           _publisher(publisher)
//     {
//     }

//     void printCitation(std::ostream& ostr) const override
//     {
//         PublishedWork::printCitation(ostr);
//         ostr << "Publisher:" << _publisher << std::endl;
//     }

// protected:
//     std::string _publisher;
// };


// task 2
Citation* addCitation(std::map<std::string, Citation*>& citations, CitationType type, const std::map<std::string, std::string> data)
{
    Citation* citationToAdd;
    // your code
    return citationToAdd;
}


// task 4
void insertInlineCitations(std::string& text, const std::map<std::string, Citation*>& citations)
{

}


// task 5
void printBibliographyAppearance(std::string& text, const std::map<std::string, Citation*>& citations)
{

}


// task 6
// you may modify classes in any way you want to solve this task
// you may add additional functions
void insertInlineAlphabetical(std::string& text, const std::map<std::string, Citation*>& citations)
{

}

#endif
