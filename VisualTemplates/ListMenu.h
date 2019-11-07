#include <vector>
#include <string>
#include"../Shapes/shapes.h"
#include"../InputManagers/InputManager.h"
#include "VisualTemplate.h"
class ListMenu : public VisualTemplate
{
public:
ListMenu(InputManager  & input, TextureManager & texture);
ListMenu(std::vector<std::string>entries, InputManager  & input, TextureManager & texture);
~ListMenu();
void Draw() override;
void Update() override;

private:
std::vector<std::string>listEntryText;
std::vector<ListEntry> Entries;
//create variable for selection marker
int EntiresperPage;
int Pages;
//page layout info
int m_entryWidth = 200;
int m_entryHeight = 30;
int currentlySelected;
};
