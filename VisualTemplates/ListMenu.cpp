#include "ListMenu.h"


ListMenu::ListMenu()
{

}
ListMenu::ListMenu(std::vector<std::string>entries)
{
for(int i = 0; i < entries.size(); i++)
{
int x = 50;
int y = toolbar::G_TOOLBAR_HEIGHT + toolbar::G_TOOLBAR_PADDING + ((m_entryHeight+16) * i);
printf("%i \n",y);
listEntryText.push_back(entries.at(i));
Entries.push_back(ListEntry(x,y,m_entryHeight,m_entryWidth,listEntryText.at(i)));
}
}
ListMenu::~ListMenu()
{

}

void ListMenu::Draw()
{
for(int i = 0; i < Entries.size(); i++)
{
Entries.at(i).Draw();


}
}


void ListMenu::Update()
{

}