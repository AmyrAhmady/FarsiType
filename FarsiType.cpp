#include "FarsiType.h"

std::vector<std::vector<std::string>> fa_AlphabetsAllForms =
{
    {u8"\u0623", u8"\ufe83", u8"\u0623", u8"\ufe84", u8"\ufe84"}, // faa_ALEF_HAMZEH_ABOVE, // أ
    {u8"\u0627", u8"\ufe8d", u8"\u0627", u8"\ufe8e", u8"\ufe8e"}, // faa_ALEF, // ا
    {u8"\u0622", u8"\ufe81", u8"\u0622", u8"\ufe82", u8"\ufe82"}, // faa_ALEF_MAD_ABOVE, // آ
    {u8"\u0621", u8"\ufe80", u8"\u0621", u8"\u0621", u8"\u0621"}, // faa_HAMZA, // ء
    {u8"\u0624", u8"\ufe85", u8"\u0624", u8"\ufe86", u8"\ufe86"}, // faa_VAAV_HAMZEH_ABOVE, // ؤ
    {u8"\u0625", u8"\ufe87", u8"\u0625", u8"\ufe88", u8"\ufe88"}, // faa_ALEF_HAMZEH_BELOW, // إ
    {u8"\u0626", u8"\ufe89", u8"\ufe8b", u8"\ufe8c", u8"\ufe8a"}, // faa_YEH_HAMZEH_ABOVE, // ئ
    {u8"\u0628", u8"\ufe8f", u8"\ufe91", u8"\ufe92", u8"\ufe90"}, // faa_BEH, // ب
    {u8"\u067e", u8"\ufb56", u8"\ufb58", u8"\ufb59", u8"\ufb57"}, // faa_PEH, // پ
    {u8"\u062A", u8"\ufe95", u8"\ufe97", u8"\ufe98", u8"\ufe96"}, // faa_TEH, // ت
    {u8"\u0629", u8"\ufe93", u8"\u0629", u8"\u0629", u8"\ufe94"}, // faa_TEH_TANIS, // ة
    {u8"\u062b", u8"\ufe99", u8"\ufe9b", u8"\ufe9c", u8"\ufe9a"}, // faa_SEH, // ث
    {u8"\u062c", u8"\ufe9d", u8"\ufe9f", u8"\ufea0", u8"\ufe9e"}, // faa_JEEM, // ج
    {u8"\u0686", u8"\ufb7a", u8"\ufb7c", u8"\ufb7d", u8"\ufb7b"}, // faa_CHEH, // چ
    {u8"\u062d", u8"\ufea1", u8"\ufea3", u8"\ufea4", u8"\ufea2"}, // faa_HEH_JEEMY, // ح
    {u8"\u062e", u8"\ufea5", u8"\ufea7", u8"\ufea8", u8"\ufea6"}, // faa_KHEH, // خ
    {u8"\u062f", u8"\ufea9", u8"\u062f", u8"\ufeaa", u8"\ufeaa"}, // faa_DAAL, // د
    {u8"\u0630", u8"\ufeab", u8"\u0630", u8"\ufeac", u8"\ufeac"}, // faa_ZAAL, // ذ
    {u8"\u0631", u8"\ufead", u8"\u0631", u8"\ufeae", u8"\ufeae"}, // faa_REH, // ر
    {u8"\u0632", u8"\ufeaf", u8"\u0632", u8"\ufeb0", u8"\ufeb0"}, // faa_ZEH, // ز
    {u8"\u0698", u8"\ufb8a", u8"\u0698", u8"\ufb8b", u8"\ufb8b"}, // faa_JEH, // ژ
    {u8"\u0633", u8"\ufeb1", u8"\ufeb3", u8"\ufeb4", u8"\ufeb2"}, // faa_SEEN, // س
    {u8"\u0634", u8"\ufeb5", u8"\ufeb7", u8"\ufeb8", u8"\ufeb6"}, // faa_SHEEN, // ش
    {u8"\u0635", u8"\ufeb9", u8"\ufebb", u8"\ufebc", u8"\ufeba"}, // faa_SAAD, // ص
    {u8"\u0636", u8"\ufebd", u8"\ufebf", u8"\ufec0", u8"\ufebe"}, // faa_ZAAD, // ض
    {u8"\u0637", u8"\ufec1", u8"\ufec3", u8"\ufec4", u8"\ufec2"}, // faa_TAAH, // ط
    {u8"\u0638", u8"\ufec5", u8"\ufec7", u8"\ufec8", u8"\ufec6"}, // faa_ZAAH, // ظ
    {u8"\u0639", u8"\ufec9", u8"\ufecb", u8"\ufecc", u8"\ufeca"}, // faa_AIN, // ع
    {u8"\u063a", u8"\ufecd", u8"\ufecf", u8"\ufed0", u8"\ufece"}, // faa_GHAIN, // غ
    {u8"\u0641", u8"\ufed1", u8"\ufed3", u8"\ufed4", u8"\ufed2"}, // faa_FEH, // ف
    {u8"\u0642", u8"\ufed5", u8"\ufed7", u8"\ufed8", u8"\ufed6"}, // faa_QAAF, // ق
    {u8"\u06a9", u8"\ufed9", u8"\ufedb", u8"\ufedc", u8"\ufeda"}, // faa_KAAF, // ک // I had to change all forms to due to rendering issues in DX faa_KAAF_NO_HEAD | original: u8"\ufb8e", u8"\ufb90", u8"\ufb91", u8"\ufb8f"
    {u8"\u0643", u8"\ufed9", u8"\ufedb", u8"\ufedc", u8"\ufeda"}, // faa_KAAF_NO_HEAD, // ك
    {u8"\u06af", u8"\ufb92", u8"\ufb94", u8"\ufb95", u8"\ufb93"}, // faa_GAAF, // گ
    {u8"\u0644", u8"\ufedd", u8"\ufedf", u8"\ufee0", u8"\ufede"}, // faa_LAAM, // ل
    {u8"\u0645", u8"\ufee1", u8"\ufee3", u8"\ufee4", u8"\ufee2"}, // faa_MEEM, // م
    {u8"\u0646", u8"\ufee5", u8"\ufee7", u8"\ufee8", u8"\ufee6"}, // faa_NOON, // ن
    {u8"\u0647", u8"\ufee9", u8"\ufeeb", u8"\ufeec", u8"\ufeea"}, // faa_VAAV, // و
    {u8"\u0648", u8"\ufeed", u8"\u0648", u8"\ufeee", u8"\ufeee"}, // faa_HEH, // ه
    {u8"\u06cc", u8"\ufbfc", u8"\ufbfe", u8"\ufbff", u8"\ufbfd"}, // faa_YEH, // ی
    {u8"\u064a", u8"\ufef1", u8"\ufef3", u8"\ufef4", u8"\ufef2"}, // faa_ARABIC_YEH, // ي
    {u8"\u0649", u8"\ufeef", u8"\u0649", u8"\ufef0", u8"\ufef0"}, // faa_ALEF_MAKSURA, // ى
    {u8"\u0640", u8"\u0640", u8"\u0640", u8"\u0640", u8"\u0640"}, // faa_TATWEEL, // ـ
    {u8"\ufefb", u8"\ufefb", u8"\ufefb", u8"\ufefc", u8"\ufefc"}, // faa_LAAM_ALEF, // لا
    {u8"\ufef7", u8"\ufef7", u8"\ufef7", u8"\ufef8", u8"\ufef8"}, // faa_LAAM_ALEF_HAMZA_ABOVE, // لأ
};

unsigned char FarsiType::GetFACharPlace(std::string fa_character, std::string prevFAChar, std::string nextFAChar)
{
    bool in_previous = false;
    bool in_next = false;
    for (auto const& fachar : fa_AlphabetsAllForms)
    {
        if (prevFAChar != "ISNOTFA" || fachar[faa_Unicode] == prevFAChar)
            in_previous = true;
        if (nextFAChar != "ISNOTFA" || fachar[faa_Unicode] == nextFAChar)
            in_next = true;
    }

    if (in_previous && in_next)
        return 3;
    if (in_next)
        return 2;
    if (in_previous)
        return 1;
    else
        return 0;
}

bool FarsiType::IsFACharBeginner(std::string fa_character)
{
    return
        fa_character == fa_AlphabetsAllForms[faa_ALEF_HAMZEH_ABOVE][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_ALEF_HAMZEH_ABOVE][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_ALEF_MAD_ABOVE][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_ALEF][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_HAMZEH][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_VAAV_HAMZEH_ABOVE][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_ALEF_HAMZEH_BELOW][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_DAAL][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_ZAAL][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_REH][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_ZEH][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_JEH][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_VAAV][faa_Unicode] ||
        fa_character == fa_AlphabetsAllForms[faa_ALEF_MAKSURA][faa_Unicode]
        ;
}

unsigned char FarsiType::FindFACharIndex(std::string fa_character)
{
    for (int i = 0; i < fa_AlphabetsAllForms.size(); ++i)
    {
        if (fa_character == fa_AlphabetsAllForms[i][faa_Unicode] ||
            fa_character == fa_AlphabetsAllForms[i][faa_Isolated] ||
            fa_character == fa_AlphabetsAllForms[i][faa_Beginner] ||
            fa_character == fa_AlphabetsAllForms[i][faa_Medium] ||
            fa_character == fa_AlphabetsAllForms[i][faa_Final])
            return i;
        else
            continue;
    }
    return fa_AlphabetsAllForms.size();
}

bool FarsiType::IsFAChar(std::string fa_character)
{
    for (auto const& fachar : fa_AlphabetsAllForms)
    {
        if (fa_character == fachar[faa_Unicode] ||
            fa_character == fachar[faa_Isolated] ||
            fa_character == fachar[faa_Beginner] ||
            fa_character == fachar[faa_Medium] ||
            fa_character == fachar[faa_Final])
            return true;
        else continue;
    }
    return false;
}

std::vector<std::string> FarsiType::ReverseFAText(std::string str)
{
    std::vector<std::string> reversedStr;

    for (int j = str.size() - 1; j > 0; j -= 2)
    {
        if ((str[j] & 0xFF) <= 0x7F)
        {
            std::string tempStr = std::string() + str[j];
            reversedStr.insert(reversedStr.end(), tempStr);
            j++;
            continue;
        }

        if ((str[j - 1] & 0xFF) <= 0x7F)
        {
            std::string tempStr = std::string() + str[j - 1];
            reversedStr.insert(reversedStr.end(), tempStr);
            j++;
            continue;
        }
        std::string tempStr = std::string() + str[j - 1] + str[j];
        reversedStr.insert(reversedStr.end(), tempStr);
    }
    return reversedStr;
}

std::string FarsiType::GetFACharGlyph(std::string fa_character, std::string prevFAChar, std::string nextFAChar)
{
    if (!IsFAChar(fa_character)) return fa_character;

    unsigned char facharPlace;
    unsigned char facharIndex;
    facharPlace = GetFACharPlace(fa_character, prevFAChar, nextFAChar);
    facharIndex = FindFACharIndex(fa_character);

    if (facharPlace == 3)
    {
        if (IsFACharBeginner(prevFAChar))
        {
            if (fa_AlphabetsAllForms[facharIndex][faa_Beginner] == fa_AlphabetsAllForms[faa_YEH][faa_Beginner])
            {
                return fa_AlphabetsAllForms[faa_ARABIC_YEH][faa_Beginner];
            }
            return fa_AlphabetsAllForms[facharIndex][faa_Beginner];
        }
        else
        {
            if (fa_AlphabetsAllForms[facharIndex][faa_Medium] == fa_AlphabetsAllForms[faa_YEH][faa_Medium])
            {
                return fa_AlphabetsAllForms[faa_ARABIC_YEH][faa_Medium];
            }
            return fa_AlphabetsAllForms[facharIndex][faa_Medium];
        }
    }
    else if (facharPlace == 2)
    {
        if (fa_AlphabetsAllForms[facharIndex][faa_Beginner] == fa_AlphabetsAllForms[faa_YEH][faa_Beginner])
        {
            return fa_AlphabetsAllForms[faa_ARABIC_YEH][faa_Beginner];
        }
        return fa_AlphabetsAllForms[facharIndex][faa_Beginner];
    }
    else if (facharPlace == 1)
    {
        if (IsFACharBeginner(prevFAChar))
        {
            if (fa_AlphabetsAllForms[facharIndex][faa_Isolated] == fa_AlphabetsAllForms[faa_YEH][faa_Isolated])
            {
                return fa_AlphabetsAllForms[faa_ALEF_MAKSURA][faa_Isolated];
            }
            return fa_AlphabetsAllForms[facharIndex][faa_Isolated];
        }
        else
        {
            if (fa_AlphabetsAllForms[facharIndex][faa_Final] == fa_AlphabetsAllForms[faa_YEH][faa_Final])
            {
                return fa_AlphabetsAllForms[faa_ALEF_MAKSURA][faa_Final];
            }
            return fa_AlphabetsAllForms[facharIndex][faa_Final];
        }
    }
    else
    {
        if (fa_AlphabetsAllForms[facharIndex][faa_Isolated] == fa_AlphabetsAllForms[faa_YEH][faa_Isolated])
        {
            return fa_AlphabetsAllForms[faa_ALEF_MAKSURA][faa_Isolated];
        }
        return fa_AlphabetsAllForms[facharIndex][faa_Isolated];
    }
}

std::string FarsiType::ConvertToFAGlyphs(std::string text)
{
    std::vector<std::string> reversed_text = ReverseFAText(text);
    std::string convertedText;
    std::string previous_fachar, next_fachar;

    for (int i = 0; i < reversed_text.size(); ++i)
    {

        if (!IsFAChar(reversed_text[i]))
        {
            convertedText.append(reversed_text[i]);
            continue;
        }
        if ((i - 1) < 0)
            previous_fachar = "ISNOTFA";
        else
        {
            if (IsFAChar(reversed_text[i - 1]))
                previous_fachar = reversed_text[i - 1];
            else
                previous_fachar = "ISNOTFA";
        }

        if ((i + 1) <= (reversed_text.size() - 1))
        {
            if (IsFAChar(reversed_text[i + 1]))
                next_fachar = reversed_text[i + 1];
            else
                next_fachar = "ISNOTFA";
        }
        else
            next_fachar = "ISNOTFA";

        std::string fa_glyph = GetFACharGlyph(reversed_text[i], next_fachar, previous_fachar);
        convertedText.append(fa_glyph);
    }
    return convertedText;
}
