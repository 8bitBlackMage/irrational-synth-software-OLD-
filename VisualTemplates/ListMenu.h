#include <vector>
#include <string>
#include"../Shapes/shapes.h"
#include"toolbarvar.h"
class ListMenu
{
public:
ListMenu();
ListMenu(std::vector<std::string>entries);
~ListMenu();
void Draw();
void Update();

private:
std::vector<std::string>listEntryText;
std::vector<ListEntry> Entries;
//create variable for selection marker
int EntiresperPage;
int Pages;

//page layout info
int m_entryWidth = 200;
int m_entryHeight = 30;

};
