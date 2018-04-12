/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

#include "LightBlock/model/ui/LightBlockModelLibraryUI.h"
#include "Prop/ui/PropManagerUI.h"
#include "BlockViz/BlockVizPanel.h"

//==============================================================================
MainComponent::MainComponent()
{
}

MainComponent::~MainComponent()
{
}

void MainComponent::init()
{
	ShapeShifterFactory::getInstance()->defs.add(new ShapeShifterDefinition("Props", &PropManagerUI::create));
	ShapeShifterFactory::getInstance()->defs.add(new ShapeShifterDefinition("Blocks", &LightBlockModelLibraryUI::create));
	ShapeShifterFactory::getInstance()->defs.add(new ShapeShifterDefinition("Block Visualizer", &BlockViz::create));
	
	OrganicMainContentComponent::init();
}

void MainComponent::clear()
{
}
