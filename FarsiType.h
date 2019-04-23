#pragma once

#include <iostream>
#include <string>
#include <vector>

enum FarsiArabicTashkeel_
{
    fat_FATHEH,
    fat_TANVIN_NASB,
    fat_ZAMMEH,
    fat_TANVIN_RAF,
    fat_KASREH,
    fat_TANVIN_JARR,
    fat_SOKOON,
    fat_TASHDID,
    fat_Tashkeel_Count
};

enum FarsiArabicTashkeel_ArabicNames_
{
    fat_FATHA = fat_FATHEH,
    fat_FATHA_TAN = fat_TANVIN_NASB,
    fat_DAMMA = fat_ZAMMEH,
    fat_DAMMA_TAN = fat_TANVIN_RAF,
    fat_KASRA = fat_KASREH,
    fat_KASRA_TAN = fat_TANVIN_JARR,
    fat_SUKUN = fat_SOKOON,
    fat_SHADDA = fat_TASHDID
};

enum FarsiArabicAlphabets_
{
    faa_ALEF_HAMZEH_ABOVE, // أ
    faa_ALEF, // ا
    faa_ALEF_MAD_ABOVE, // آ
    faa_HAMZEH, // ء
    faa_VAAV_HAMZEH_ABOVE, // ؤ
    faa_ALEF_HAMZEH_BELOW, // إ
    faa_YEH_HAMZEH_ABOVE, // ئ
    faa_BEH, // ب
    faa_PEH, // پ
    faa_TEH, // ت
    faa_TEH_TANIS, // ة
    faa_SEH, // ث
    faa_JEEM, // ج
    faa_CHEH, // چ
    faa_HEH_JEEMY, // ح
    faa_KHEH, // خ
    faa_DAAL, // د
    faa_ZAAL, // ذ
    faa_REH, // ر
    faa_ZEH, // ز
    faa_JEH, // ژ
    faa_SEEN, // س
    faa_SHEEN, // ش
    faa_SAAD, // ص
    faa_ZAAD, // ض
    faa_TAAH, // ط
    faa_ZAAH, // ظ
    faa_AIN, // ع
    faa_GHAIN, // غ
    faa_FEH, // ف
    faa_QAAF, // ق
    faa_KAAF, // ک
    faa_KAAF_NO_HEAD, // ك
    faa_GAAF, // گ
    faa_LAAM, // ل
    faa_MEEM, // م
    faa_NOON, // ن
    faa_VAAV, // و
    faa_HEH, // ه
    faa_YEH, // ی
    faa_ARABIC_YEH, // ي
    faa_ALEF_MAKSURA, // ى
    faa_TATWEEL, // ـ
    faa_LAAM_ALEF, // لا
    faa_LAAM_ALEF_HAMZA_ABOVE, // لأ
};

enum FarsiArabicAlphabets_ArabicNames_
{
    faa_ALEF_HAMZA_ABOVE = faa_ALEF_HAMZEH_ABOVE,
    faa_ALEF_MADDA_ABOVE = faa_ALEF_MAD_ABOVE,
    faa_HAMZA = faa_HAMZEH,
    faa_WAAW_HAMZA_ABOVE = faa_VAAV_HAMZEH_ABOVE,
    faa_ALEF_HAMZA_BELOW = faa_ALEF_HAMZEH_BELOW,
    faa_YEH_HAMZA_ABOVE = faa_YEH_HAMZEH_ABOVE,
    faa_TEH_MARBUTA = faa_TEH_TANIS,
    faa_THEH = faa_SEH,
    faa_HAH = faa_HEH_JEEMY,
    faa_THAAL = faa_ZAAL,
    faa_ZAIN = faa_ZEH,
    faa_DAAD = faa_ZAAD,
    faa_KAAF_ARABIC = faa_KAAF_NO_HEAD,
    faa_KEHEH = faa_KAAF,
    faa_WAAW = faa_VAAV
};

enum FarsiArabicAlphabets_Forms_
{
    faa_Unicode,
    faa_Isolated,
    faa_Beginner,
    faa_Medium,
    faa_Final,
};

extern const std::vector<std::vector<std::string>> fa_AlphabetsAllForms;

namespace FarsiType
{
    /// <summary>Get Farsi/Arabic character place in a word for its form, depending its previous and next character.</summary>
    /// <param name="fa_character">Character you want to check its place.</param>
    /// <param name="prevFAChar">Previous character, to check if its connected to fa_character or not.</param>
    /// <param name="nextFAChar">Next character, to check if its connected to fa_character or not.</param>
    /// <returns>Returns an int in type of a char. Possible values: 0- no connection, 1- conntected from behind, 2- connected from front, 3- connected from both side.</returns>
    unsigned char GetFACharPlace(const std::string &fa_character, const std::string &prevFAChar, const std::string &nextFAChar);

    /// <summary>Check if given character is a Farsi/Arabic letter in beginner form or not.</summary>
    /// <param name="fa_character">Character you want to check.</param>
    /// <returns>Returns a bool value. Possible values: true, false.</returns>
    bool IsFACharBeginner(const std::string &fa_character);

    /// <summary>Find vector index of the give character in fa_AlphabetsAllForms vector</summary>
    /// <param name="fa_character">Character you want get its index.</param>
    /// <returns>Returns an int in type of a char. Possible values: 0 to 44 (fa_AlphabetsAllForms array size).</returns>
    unsigned char FindFACharIndex(const std::string &fa_character);

    /// <summary>Check if given character is a Farsi/Arabic letter or not.</summary>
    /// <param name="fa_character">Character you want to check.</param>
    /// <returns>Returns a bool value. Possible values: true, false.</returns>
    bool IsFAChar(const std::string &fa_character);

    /// <summary>Reverses Farsi/Arabic string and returns a vector of std::strings, each of them containing Farsi/Arabic letters with different byte counts.</summary>
    /// <param name="str">Farsi/Arabic string.</param>
    /// <returns>Returns a vector of std::strings.</returns>
    std::vector<std::string> ReverseFAText(const std::string &str);

    /// <summary>Get correct unicode of Farsi/Arabic letter depending on its position, previous, and next letters.</summary>
    /// <param name="fa_character">Character you want to check.</param>
    /// <param name="prevFAChar">Previous character, to check if its connected to fa_character or not.</param>
    /// <param name="nextFAChar">Next character, to check if its connected to fa_character or not.</param>
    /// <returns>Returns a std::string.</returns>
    std::string GetFACharGlyph(const std::string &fa_character, const std::string &prevFAChar, const std::string &nextFAChar);

    /// <summary>Converts a Farsi/Arabic string to a normal, fixed, not-reversed string for using it in you program :).</summary>
    /// <param name="text">Farsi/Arabic text.</param>
    /// <returns>Returns a std::string. Fixed Farsi/Arabic string</returns>
    std::string ConvertToFAGlyphs(const std::string &text);
};
