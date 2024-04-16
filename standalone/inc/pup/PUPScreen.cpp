#include "core/stdafx.h"
#include "PUPScreen.h"
#include "PUPUtils.h"

PUPScreen::PUPScreen()
{
}

PUPScreen::~PUPScreen()
{
}

PUPScreen* PUPScreen::CreateFromCSVLine(string line)
{
   vector<string> parts = PUPUtils::ParseCSVLine(line);
   if (parts.size() != 8)
      return nullptr;

   PUPScreen* screen = new PUPScreen();

   screen->m_screenNum = string_to_int(parts[0], 0);
   screen->m_screenDes = parts[1];
   screen->m_playList = parts[2];
   screen->m_playFile = parts[3];
   screen->m_loopit = parts[4];
   screen->m_active = string_to_int(parts[5], 0);
   screen->m_priority = string_to_int(parts[6], 0);
   screen->m_customPos = parts[7];

   return screen;
}

string PUPScreen::ToString() const
{
   return "screenNum=" + std::to_string(m_screenNum) +
      ", screenDes=" + m_screenDes +
      ", playlist=" + m_playList +
      ", playfile=" + m_playFile +
      ", loopit=" + m_loopit +
      ", active=" + std::to_string(m_active) +
      ", priority=" + std::to_string(m_priority) +
      ", m_customPos=" + m_customPos;
}
