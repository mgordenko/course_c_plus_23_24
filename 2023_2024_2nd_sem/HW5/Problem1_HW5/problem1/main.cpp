#include <algorithm>
#include <cassert>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "solution.h"


// void test1()
// {
//     Citation* artp1 = new Article("Title", 2023, "John", "Author", "Journal of Articles");
//     artp1->printCitation(std::cout);
//     PublishedWork* pubwork = new Article("Title", 2023, "John", "Author", "Journal of Articles");
//     pubwork->printCitation(std::cout);

//     Citation* artp2 = new WebPage("Title", 2023, "https://ya.ru");
//     artp2->printCitation(std::cout);

//     return;
// }


// void test2()
// {
//     std::map<std::string, Citation*> citations;

//     std::map<std::string, std::string> dataWeb = {
//             {"key", "{latex2023}"},
//             {"title", "LaTeX"},
//             {"year", "2023"},
//             {"url", "https://en.wikipedia.org/wiki/LaTeX"}};



//     std::map<std::string, std::string> dataArticle = {
//             {"key", "{hdrc}"},
//             {"title", "Gradient domain high dynamic range compression"},
//             {"year", "2002"},
//             {"journal", "Computer graphics and interactive techniques"},
//             {"lastname", "Fattal"},
//             {"firstname", "Raanan"}};


//     addCitation(citations, CitationType::WebPage, dataWeb);
//     addCitation(citations, CitationType::Article, dataArticle);

//     for (std::map<std::string, Citation*>::value_type& citation: citations)
//     {
//         citation.second->printCitation(std::cout);
//         delete citation.second;
//     }

//     return;
// }

// void test3()
// {
//     std::map<std::string, Citation*> citations;

//     std::map<std::string, std::string> dataWeb = {
//             {"key", "{latex2023}"},
//             {"title", "LaTeX"},
//             {"year", "2023"},
//             {"url", "https://en.wikipedia.org/wiki/LaTeX"}};

//     std::map<std::string, std::string> dataArticle = {
//             {"key", "{hdrc}"},
//             {"title", "Gradient domain high dynamic range compression"},
//             {"year", "2002"},
//             {"journal", "Computer graphics and interactive techniques"},
//             {"lastname", "Fattal"},
//             {"firstname", "Raanan"}};

//     addCitation(citations, CitationType::WebPage, dataWeb);
//     addCitation(citations, CitationType::Article, dataArticle);

//     {
//         const Citation* cit = citations["{latex2023}"];
//         std::cout << cit->getInlineCitation() << std::endl;
//     }
//     {
//         const Citation* cit = citations["{hdrc}"];
//         std::cout << cit->getInlineCitation() << std::endl;
//     }
//     for (std::map<std::string, Citation*>::value_type& citation: citations)
//     {
//         delete citation.second;
//     }
// }



// void test4()
// {
//     std::map<std::string, Citation*> citations;

//     std::map<std::string, std::string> dataWeb = {
//             {"key", "{latex2023}"},
//             {"title", "LaTeX"},
//             {"year", "2023"},
//             {"url", "https://en.wikipedia.org/wiki/LaTeX"}};

//     addCitation(citations, CitationType::WebPage, dataWeb);


//     std::map<std::string, std::string> dataArticle = {
//             {"key", "{hdrc}"},
//             {"title", "Gradient domain high dynamic range compression"},
//             {"year", "2002"},
//             {"journal", "Computer graphics and interactive techniques"},
//             {"lastname", "Fattal"},
//             {"firstname", "Raanan"}};


//     addCitation(citations, CitationType::Article, dataArticle);
//     std::string text = "Long text with citations {latex2023}.\nThis has been referenced in {hdrc}.\n";
//     insertInlineCitations(text, citations);
//     std::cout << text;
//     for (std::map<std::string, Citation*>::value_type& citation: citations)
//     {
//         delete citation.second;
//     }
// }



// void test5()
// {
//     std::map<std::string, Citation*> citations;

//     std::map<std::string, std::string> dataWeb = {
//             {"key", "{latex2023}"},
//             {"title", "LaTeX"},
//             {"year", "2023"},
//             {"url", "https://en.wikipedia.org/wiki/LaTeX"}};

//     addCitation(citations, CitationType::WebPage, dataWeb);


//     std::map<std::string, std::string> dataArticle = {
//             {"key", "{hdrc}"},
//             {"title", "Gradient domain high dynamic range compression"},
//             {"year", "2002"},
//             {"journal", "Computer graphics and interactive techniques"},
//             {"lastname", "Fattal"},
//             {"firstname", "Raanan"}};


//     addCitation(citations, CitationType::Article, dataArticle);
//     std::string text = "Long text with citations {latex2023}.\nThis has been referenced in {hdrc}.\n";
//     printBibliographyAppearance(text, citations);
//     std::cout << text;
//     for (std::map<std::string, Citation*>::value_type& citation: citations)
//     {
//         delete citation.second;
//     }
// }


// void test6()
// {
//     std::map<std::string, Citation*> citations;

//     std::map<std::string, std::string> dataWeb = {
//             {"key", "{latex2023}"},
//             {"title", "LaTeX"},
//             {"year", "2023"},
//             {"url", "https://en.wikipedia.org/wiki/LaTeX"}};

//     addCitation(citations, CitationType::WebPage, dataWeb);


//     std::map<std::string, std::string> dataArticle = {
//             {"key", "{hdrc}"},
//             {"title", "Gradient domain high dynamic range compression"},
//             {"year", "2002"},
//             {"journal", "Computer graphics and interactive techniques"},
//             {"lastname", "Fattal"},
//             {"firstname", "Raanan"}};


//     addCitation(citations, CitationType::Article, dataArticle);
//     std::string text = "Long text with citations {latex2023}.\nThis has been referenced in {hdrc}.\n";
//     insertInlineAlphabetical(text, citations);
//     std::cout << text << std::endl;

//     for (std::map<std::string, Citation*>::value_type& citation: citations)
//     {
//         delete citation.second;
//     }
// }


// uncomment tests one by one
int main()
{

    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();

    
    return 0;
}
