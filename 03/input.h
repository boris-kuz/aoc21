#pragma once
#include <vector>
#include <bitset>

namespace advent03{
static const std::vector input{
    std::bitset<12>{0b010100010111},
    std::bitset<12>{0b100100100110},
    std::bitset<12>{0b100110111001},
    std::bitset<12>{0b011001011011},
    std::bitset<12>{0b010000110111},
    std::bitset<12>{0b000011101001},
    std::bitset<12>{0b011000011101},
    std::bitset<12>{0b101111011111},
    std::bitset<12>{0b011001011010},
    std::bitset<12>{0b111100001001},
    std::bitset<12>{0b111111000110},
    std::bitset<12>{0b100010100110},
    std::bitset<12>{0b011100100100},
    std::bitset<12>{0b011111010000},
    std::bitset<12>{0b111010001100},
    std::bitset<12>{0b010111001110},
    std::bitset<12>{0b100010100100},
    std::bitset<12>{0b101000010000},
    std::bitset<12>{0b011101110100},
    std::bitset<12>{0b100010011000},
    std::bitset<12>{0b001111110011},
    std::bitset<12>{0b111001100001},
    std::bitset<12>{0b010000011001},
    std::bitset<12>{0b000011101010},
    std::bitset<12>{0b100010101100},
    std::bitset<12>{0b111011100010},
    std::bitset<12>{0b110000100001},
    std::bitset<12>{0b101010110001},
    std::bitset<12>{0b111101110101},
    std::bitset<12>{0b001010010100},
    std::bitset<12>{0b001001111001},
    std::bitset<12>{0b100001110010},
    std::bitset<12>{0b100100000111},
    std::bitset<12>{0b000101010101},
    std::bitset<12>{0b001101111011},
    std::bitset<12>{0b111100011000},
    std::bitset<12>{0b100111110101},
    std::bitset<12>{0b010101111000},
    std::bitset<12>{0b100110011001},
    std::bitset<12>{0b010001111010},
    std::bitset<12>{0b010111111001},
    std::bitset<12>{0b111000100010},
    std::bitset<12>{0b011000011011},
    std::bitset<12>{0b100010111111},
    std::bitset<12>{0b010110110010},
    std::bitset<12>{0b010100000001},
    std::bitset<12>{0b100011000100},
    std::bitset<12>{0b100000010001},
    std::bitset<12>{0b101010001000},
    std::bitset<12>{0b100111011001},
    std::bitset<12>{0b101011001010},
    std::bitset<12>{0b010110110111},
    std::bitset<12>{0b111011000100},
    std::bitset<12>{0b110010111110},
    std::bitset<12>{0b010101000111},
    std::bitset<12>{0b000101111101},
    std::bitset<12>{0b101101101101},
    std::bitset<12>{0b010100010001},
    std::bitset<12>{0b000111101111},
    std::bitset<12>{0b101101001101},
    std::bitset<12>{0b000011110010},
    std::bitset<12>{0b000101101011},
    std::bitset<12>{0b001111100000},
    std::bitset<12>{0b001000100110},
    std::bitset<12>{0b111000000100},
    std::bitset<12>{0b001000010110},
    std::bitset<12>{0b000111010001},
    std::bitset<12>{0b111011001010},
    std::bitset<12>{0b100011100010},
    std::bitset<12>{0b011010101011},
    std::bitset<12>{0b001100010001},
    std::bitset<12>{0b000001011001},
    std::bitset<12>{0b110001101101},
    std::bitset<12>{0b010101100001},
    std::bitset<12>{0b111000011100},
    std::bitset<12>{0b000101000000},
    std::bitset<12>{0b001001010101},
    std::bitset<12>{0b100000100111},
    std::bitset<12>{0b110000001000},
    std::bitset<12>{0b111001110100},
    std::bitset<12>{0b001111000110},
    std::bitset<12>{0b111110000100},
    std::bitset<12>{0b100111111000},
    std::bitset<12>{0b100101111111},
    std::bitset<12>{0b100101011111},
    std::bitset<12>{0b111000000011},
    std::bitset<12>{0b110000011001},
    std::bitset<12>{0b000101000101},
    std::bitset<12>{0b110110010011},
    std::bitset<12>{0b110111010100},
    std::bitset<12>{0b001001101100},
    std::bitset<12>{0b101101100001},
    std::bitset<12>{0b110011001000},
    std::bitset<12>{0b010010100111},
    std::bitset<12>{0b000110101011},
    std::bitset<12>{0b101010000011},
    std::bitset<12>{0b100110001011},
    std::bitset<12>{0b000111111011},
    std::bitset<12>{0b000100111011},
    std::bitset<12>{0b101011111001},
    std::bitset<12>{0b011010110110},
    std::bitset<12>{0b100101011000},
    std::bitset<12>{0b100000010110},
    std::bitset<12>{0b000010101000},
    std::bitset<12>{0b100100111000},
    std::bitset<12>{0b011100011000},
    std::bitset<12>{0b000010011001},
    std::bitset<12>{0b000001010000},
    std::bitset<12>{0b011001110110},
    std::bitset<12>{0b111101101010},
    std::bitset<12>{0b011110001000},
    std::bitset<12>{0b011100110001},
    std::bitset<12>{0b011011010101},
    std::bitset<12>{0b101011100001},
    std::bitset<12>{0b000000111000},
    std::bitset<12>{0b110000110011},
    std::bitset<12>{0b101111001100},
    std::bitset<12>{0b111000101111},
    std::bitset<12>{0b100110110110},
    std::bitset<12>{0b110000111101},
    std::bitset<12>{0b001101110000},
    std::bitset<12>{0b100010001110},
    std::bitset<12>{0b001001010010},
    std::bitset<12>{0b001010000110},
    std::bitset<12>{0b000110011001},
    std::bitset<12>{0b111111000101},
    std::bitset<12>{0b111011011010},
    std::bitset<12>{0b101101111010},
    std::bitset<12>{0b101001000110},
    std::bitset<12>{0b101100100101},
    std::bitset<12>{0b001110100000},
    std::bitset<12>{0b110001000001},
    std::bitset<12>{0b010010011101},
    std::bitset<12>{0b011110100010},
    std::bitset<12>{0b011000000010},
    std::bitset<12>{0b101110100111},
    std::bitset<12>{0b000001001010},
    std::bitset<12>{0b101101110001},
    std::bitset<12>{0b001110101100},
    std::bitset<12>{0b011101011001},
    std::bitset<12>{0b011010000001},
    std::bitset<12>{0b100010011110},
    std::bitset<12>{0b000111100010},
    std::bitset<12>{0b011000100110},
    std::bitset<12>{0b101001010101},
    std::bitset<12>{0b000110011010},
    std::bitset<12>{0b111100101001},
    std::bitset<12>{0b011010000011},
    std::bitset<12>{0b010101011101},
    std::bitset<12>{0b010011011000},
    std::bitset<12>{0b011001000100},
    std::bitset<12>{0b010011101111},
    std::bitset<12>{0b100110100111},
    std::bitset<12>{0b110111010110},
    std::bitset<12>{0b011001101101},
    std::bitset<12>{0b110001100111},
    std::bitset<12>{0b010100111110},
    std::bitset<12>{0b111101011010},
    std::bitset<12>{0b011010000100},
    std::bitset<12>{0b010101101110},
    std::bitset<12>{0b101000101100},
    std::bitset<12>{0b110110110001},
    std::bitset<12>{0b110011110011},
    std::bitset<12>{0b111100001100},
    std::bitset<12>{0b000011110101},
    std::bitset<12>{0b011100000110},
    std::bitset<12>{0b011100000111},
    std::bitset<12>{0b100101001010},
    std::bitset<12>{0b001110010001},
    std::bitset<12>{0b011101110111},
    std::bitset<12>{0b001101100001},
    std::bitset<12>{0b111111010011},
    std::bitset<12>{0b101001111110},
    std::bitset<12>{0b000000100000},
    std::bitset<12>{0b000000100010},
    std::bitset<12>{0b101100101000},
    std::bitset<12>{0b010011011111},
    std::bitset<12>{0b101100100000},
    std::bitset<12>{0b000110100100},
    std::bitset<12>{0b000010001001},
    std::bitset<12>{0b110011000111},
    std::bitset<12>{0b101000101101},
    std::bitset<12>{0b100101010111},
    std::bitset<12>{0b010111001010},
    std::bitset<12>{0b000000011011},
    std::bitset<12>{0b110110100011},
    std::bitset<12>{0b111001100000},
    std::bitset<12>{0b000011101101},
    std::bitset<12>{0b001011100010},
    std::bitset<12>{0b001100110100},
    std::bitset<12>{0b010010100010},
    std::bitset<12>{0b001001010100},
    std::bitset<12>{0b100111010110},
    std::bitset<12>{0b001001111000},
    std::bitset<12>{0b011011110101},
    std::bitset<12>{0b110111101011},
    std::bitset<12>{0b000000001000},
    std::bitset<12>{0b111110011011},
    std::bitset<12>{0b010101011001},
    std::bitset<12>{0b001011111111},
    std::bitset<12>{0b011011111100},
    std::bitset<12>{0b011000001011},
    std::bitset<12>{0b101000100000},
    std::bitset<12>{0b010011011011},
    std::bitset<12>{0b011100111100},
    std::bitset<12>{0b011001011110},
    std::bitset<12>{0b111001101010},
    std::bitset<12>{0b111011111111},
    std::bitset<12>{0b100010101010},
    std::bitset<12>{0b101100001101},
    std::bitset<12>{0b110001000111},
    std::bitset<12>{0b100111011010},
    std::bitset<12>{0b010000111010},
    std::bitset<12>{0b011001101000},
    std::bitset<12>{0b111111001001},
    std::bitset<12>{0b000111100000},
    std::bitset<12>{0b011000010111},
    std::bitset<12>{0b110110000111},
    std::bitset<12>{0b110100111100},
    std::bitset<12>{0b011111000001},
    std::bitset<12>{0b000001110100},
    std::bitset<12>{0b100110101110},
    std::bitset<12>{0b111000111001},
    std::bitset<12>{0b010001000000},
    std::bitset<12>{0b111001001010},
    std::bitset<12>{0b111100111101},
    std::bitset<12>{0b101000110100},
    std::bitset<12>{0b000101000011},
    std::bitset<12>{0b010100101111},
    std::bitset<12>{0b010100011010},
    std::bitset<12>{0b111110000110},
    std::bitset<12>{0b110000010111},
    std::bitset<12>{0b010100001100},
    std::bitset<12>{0b010000011010},
    std::bitset<12>{0b111010000100},
    std::bitset<12>{0b000011010010},
    std::bitset<12>{0b011001101001},
    std::bitset<12>{0b010100111001},
    std::bitset<12>{0b011001010111},
    std::bitset<12>{0b001001100011},
    std::bitset<12>{0b110001100101},
    std::bitset<12>{0b101001001001},
    std::bitset<12>{0b011101010010},
    std::bitset<12>{0b011101011110},
    std::bitset<12>{0b000111111110},
    std::bitset<12>{0b010111010001},
    std::bitset<12>{0b101011011110},
    std::bitset<12>{0b001011101101},
    std::bitset<12>{0b100110010000},
    std::bitset<12>{0b001111100101},
    std::bitset<12>{0b011101001110},
    std::bitset<12>{0b010111100000},
    std::bitset<12>{0b000010111111},
    std::bitset<12>{0b101001010000},
    std::bitset<12>{0b001101001010},
    std::bitset<12>{0b110010111101},
    std::bitset<12>{0b001010110110},
    std::bitset<12>{0b001001001001},
    std::bitset<12>{0b110110110101},
    std::bitset<12>{0b000001011011},
    std::bitset<12>{0b001110010101},
    std::bitset<12>{0b011110000001},
    std::bitset<12>{0b101111011011},
    std::bitset<12>{0b100000011100},
    std::bitset<12>{0b101000010001},
    std::bitset<12>{0b000101101100},
    std::bitset<12>{0b010111110111},
    std::bitset<12>{0b010001101110},
    std::bitset<12>{0b011101001000},
    std::bitset<12>{0b110100001110},
    std::bitset<12>{0b110010110101},
    std::bitset<12>{0b101001101000},
    std::bitset<12>{0b000101010010},
    std::bitset<12>{0b011101001100},
    std::bitset<12>{0b100111101100},
    std::bitset<12>{0b001011111001},
    std::bitset<12>{0b011111101100},
    std::bitset<12>{0b100100110001},
    std::bitset<12>{0b101001101101},
    std::bitset<12>{0b011100001010},
    std::bitset<12>{0b000111101101},
    std::bitset<12>{0b110010110111},
    std::bitset<12>{0b100111010011},
    std::bitset<12>{0b000101110110},
    std::bitset<12>{0b100111000010},
    std::bitset<12>{0b101010000111},
    std::bitset<12>{0b101101110101},
    std::bitset<12>{0b100000100101},
    std::bitset<12>{0b111100010101},
    std::bitset<12>{0b111011100111},
    std::bitset<12>{0b110011011111},
    std::bitset<12>{0b100110100011},
    std::bitset<12>{0b111011000101},
    std::bitset<12>{0b001010101110},
    std::bitset<12>{0b010011000110},
    std::bitset<12>{0b110001001111},
    std::bitset<12>{0b110100110110},
    std::bitset<12>{0b011011011100},
    std::bitset<12>{0b111111100100},
    std::bitset<12>{0b101010110010},
    std::bitset<12>{0b110011101001},
    std::bitset<12>{0b000110100001},
    std::bitset<12>{0b010011110111},
    std::bitset<12>{0b110111001101},
    std::bitset<12>{0b100100100100},
    std::bitset<12>{0b000111000110},
    std::bitset<12>{0b001001010000},
    std::bitset<12>{0b001111111110},
    std::bitset<12>{0b110000011101},
    std::bitset<12>{0b011101011000},
    std::bitset<12>{0b110000111001},
    std::bitset<12>{0b000100000000},
    std::bitset<12>{0b100110111100},
    std::bitset<12>{0b111000010101},
    std::bitset<12>{0b100010011100},
    std::bitset<12>{0b110100111011},
    std::bitset<12>{0b010111110110},
    std::bitset<12>{0b101111101010},
    std::bitset<12>{0b100110111101},
    std::bitset<12>{0b110100110101},
    std::bitset<12>{0b011111001010},
    std::bitset<12>{0b000010010001},
    std::bitset<12>{0b011001010010},
    std::bitset<12>{0b010111101101},
    std::bitset<12>{0b000000110000},
    std::bitset<12>{0b111001101110},
    std::bitset<12>{0b001011000101},
    std::bitset<12>{0b100011011101},
    std::bitset<12>{0b101101010100},
    std::bitset<12>{0b010000010111},
    std::bitset<12>{0b000010101111},
    std::bitset<12>{0b001110101010},
    std::bitset<12>{0b100000001011},
    std::bitset<12>{0b111101011110},
    std::bitset<12>{0b110110001000},
    std::bitset<12>{0b010100010000},
    std::bitset<12>{0b010100110011},
    std::bitset<12>{0b000001001110},
    std::bitset<12>{0b101011000111},
    std::bitset<12>{0b110111101000},
    std::bitset<12>{0b001100110111},
    std::bitset<12>{0b100110101000},
    std::bitset<12>{0b000100111110},
    std::bitset<12>{0b101111110000},
    std::bitset<12>{0b101001001000},
    std::bitset<12>{0b001101001011},
    std::bitset<12>{0b111011111101},
    std::bitset<12>{0b111011110011},
    std::bitset<12>{0b110111111100},
    std::bitset<12>{0b110001010100},
    std::bitset<12>{0b011110001110},
    std::bitset<12>{0b010011100100},
    std::bitset<12>{0b101100010000},
    std::bitset<12>{0b111010000111},
    std::bitset<12>{0b100100011010},
    std::bitset<12>{0b100100011011},
    std::bitset<12>{0b100001101111},
    std::bitset<12>{0b000111100111},
    std::bitset<12>{0b001101011010},
    std::bitset<12>{0b101110000010},
    std::bitset<12>{0b000000000101},
    std::bitset<12>{0b110111000110},
    std::bitset<12>{0b000010100111},
    std::bitset<12>{0b001100101110},
    std::bitset<12>{0b000010011101},
    std::bitset<12>{0b101100100001},
    std::bitset<12>{0b011011000101},
    std::bitset<12>{0b100110101100},
    std::bitset<12>{0b011000110000},
    std::bitset<12>{0b111000100101},
    std::bitset<12>{0b011110110101},
    std::bitset<12>{0b111011011111},
    std::bitset<12>{0b000110010110},
    std::bitset<12>{0b001010011110},
    std::bitset<12>{0b001110111111},
    std::bitset<12>{0b110110011100},
    std::bitset<12>{0b111110001001},
    std::bitset<12>{0b000001111000},
    std::bitset<12>{0b101100101110},
    std::bitset<12>{0b011110001001},
    std::bitset<12>{0b000101010011},
    std::bitset<12>{0b011100100000},
    std::bitset<12>{0b100011111010},
    std::bitset<12>{0b111011101011},
    std::bitset<12>{0b000111100110},
    std::bitset<12>{0b101011111010},
    std::bitset<12>{0b010100111101},
    std::bitset<12>{0b110100110000},
    std::bitset<12>{0b000000000011},
    std::bitset<12>{0b011000010101},
    std::bitset<12>{0b101110110101},
    std::bitset<12>{0b011100010101},
    std::bitset<12>{0b000111001101},
    std::bitset<12>{0b100011010000},
    std::bitset<12>{0b010111001100},
    std::bitset<12>{0b110000110010},
    std::bitset<12>{0b010001001100},
    std::bitset<12>{0b000001011100},
    std::bitset<12>{0b110111000000},
    std::bitset<12>{0b011110011001},
    std::bitset<12>{0b101000010110},
    std::bitset<12>{0b000100100111},
    std::bitset<12>{0b101110000011},
    std::bitset<12>{0b001111011001},
    std::bitset<12>{0b101010011101},
    std::bitset<12>{0b111100110110},
    std::bitset<12>{0b111101100000},
    std::bitset<12>{0b000000101111},
    std::bitset<12>{0b011111011110},
    std::bitset<12>{0b000000000111},
    std::bitset<12>{0b001000101110},
    std::bitset<12>{0b011101101111},
    std::bitset<12>{0b011010100011},
    std::bitset<12>{0b010101000010},
    std::bitset<12>{0b001000101100},
    std::bitset<12>{0b010000110100},
    std::bitset<12>{0b100010101111},
    std::bitset<12>{0b000011010111},
    std::bitset<12>{0b011011110000},
    std::bitset<12>{0b010101100110},
    std::bitset<12>{0b011110001011},
    std::bitset<12>{0b101011000001},
    std::bitset<12>{0b011100101101},
    std::bitset<12>{0b111001100011},
    std::bitset<12>{0b100001100101},
    std::bitset<12>{0b101011010110},
    std::bitset<12>{0b010101000101},
    std::bitset<12>{0b001001011111},
    std::bitset<12>{0b111010001101},
    std::bitset<12>{0b010011001111},
    std::bitset<12>{0b001010100110},
    std::bitset<12>{0b011101000001},
    std::bitset<12>{0b000000111101},
    std::bitset<12>{0b111010000101},
    std::bitset<12>{0b011000100011},
    std::bitset<12>{0b100100011110},
    std::bitset<12>{0b010001111011},
    std::bitset<12>{0b111100111001},
    std::bitset<12>{0b011101111111},
    std::bitset<12>{0b001111110000},
    std::bitset<12>{0b100100010001},
    std::bitset<12>{0b100111100001},
    std::bitset<12>{0b001111000011},
    std::bitset<12>{0b100010111011},
    std::bitset<12>{0b110110000110},
    std::bitset<12>{0b110000001010},
    std::bitset<12>{0b000000100101},
    std::bitset<12>{0b000110111010},
    std::bitset<12>{0b100001010100},
    std::bitset<12>{0b011011000010},
    std::bitset<12>{0b111001001110},
    std::bitset<12>{0b100010000000},
    std::bitset<12>{0b100101000011},
    std::bitset<12>{0b111101010000},
    std::bitset<12>{0b001001110110},
    std::bitset<12>{0b111010010011},
    std::bitset<12>{0b110101101000},
    std::bitset<12>{0b101100111001},
    std::bitset<12>{0b101010100111},
    std::bitset<12>{0b000001101001},
    std::bitset<12>{0b000110010001},
    std::bitset<12>{0b010001100100},
    std::bitset<12>{0b101011100100},
    std::bitset<12>{0b111000110000},
    std::bitset<12>{0b001100111101},
    std::bitset<12>{0b011000111101},
    std::bitset<12>{0b110010110110},
    std::bitset<12>{0b101101010111},
    std::bitset<12>{0b110110100100},
    std::bitset<12>{0b101001001011},
    std::bitset<12>{0b000101100111},
    std::bitset<12>{0b000110010011},
    std::bitset<12>{0b011000110011},
    std::bitset<12>{0b100011110110},
    std::bitset<12>{0b110000101111},
    std::bitset<12>{0b100110111000},
    std::bitset<12>{0b100000000010},
    std::bitset<12>{0b001001011100},
    std::bitset<12>{0b100100000110},
    std::bitset<12>{0b100001001001},
    std::bitset<12>{0b010000011011},
    std::bitset<12>{0b110111110100},
    std::bitset<12>{0b000110100110},
    std::bitset<12>{0b011010000010},
    std::bitset<12>{0b110001100110},
    std::bitset<12>{0b011000101010},
    std::bitset<12>{0b111011011110},
    std::bitset<12>{0b100011010110},
    std::bitset<12>{0b100001001000},
    std::bitset<12>{0b101010101000},
    std::bitset<12>{0b011100100110},
    std::bitset<12>{0b010000010010},
    std::bitset<12>{0b100010010011},
    std::bitset<12>{0b100000101011},
    std::bitset<12>{0b010110000101},
    std::bitset<12>{0b000000101010},
    std::bitset<12>{0b000000010111},
    std::bitset<12>{0b110110110010},
    std::bitset<12>{0b101111010101},
    std::bitset<12>{0b000010001000},
    std::bitset<12>{0b100000110101},
    std::bitset<12>{0b000100111010},
    std::bitset<12>{0b111100000100},
    std::bitset<12>{0b101000101110},
    std::bitset<12>{0b100100001111},
    std::bitset<12>{0b000111011101},
    std::bitset<12>{0b110100101101},
    std::bitset<12>{0b011010010100},
    std::bitset<12>{0b001010110011},
    std::bitset<12>{0b111110011101},
    std::bitset<12>{0b101110111010},
    std::bitset<12>{0b001110110110},
    std::bitset<12>{0b111100011010},
    std::bitset<12>{0b100110000010},
    std::bitset<12>{0b111000001110},
    std::bitset<12>{0b110010010010},
    std::bitset<12>{0b101010100110},
    std::bitset<12>{0b011101010011},
    std::bitset<12>{0b101100100111},
    std::bitset<12>{0b100011101110},
    std::bitset<12>{0b111110101010},
    std::bitset<12>{0b110011111101},
    std::bitset<12>{0b101110001001},
    std::bitset<12>{0b001101100101},
    std::bitset<12>{0b011010100100},
    std::bitset<12>{0b110010001101},
    std::bitset<12>{0b010011001010},
    std::bitset<12>{0b100100010010},
    std::bitset<12>{0b100110011111},
    std::bitset<12>{0b110010111001},
    std::bitset<12>{0b001111111100},
    std::bitset<12>{0b110011111110},
    std::bitset<12>{0b111001101000},
    std::bitset<12>{0b010101100000},
    std::bitset<12>{0b101101000010},
    std::bitset<12>{0b100011011110},
    std::bitset<12>{0b010000111110},
    std::bitset<12>{0b110000111010},
    std::bitset<12>{0b011111110110},
    std::bitset<12>{0b101010111001},
    std::bitset<12>{0b000110111001},
    std::bitset<12>{0b100111010000},
    std::bitset<12>{0b111001010001},
    std::bitset<12>{0b111101001000},
    std::bitset<12>{0b111000001101},
    std::bitset<12>{0b001100001001},
    std::bitset<12>{0b001101111111},
    std::bitset<12>{0b011010101001},
    std::bitset<12>{0b001100111000},
    std::bitset<12>{0b000100101101},
    std::bitset<12>{0b010101110000},
    std::bitset<12>{0b000100100010},
    std::bitset<12>{0b010111010101},
    std::bitset<12>{0b110011001111},
    std::bitset<12>{0b101001010110},
    std::bitset<12>{0b100000001010},
    std::bitset<12>{0b110010001110},
    std::bitset<12>{0b100011100101},
    std::bitset<12>{0b110101011111},
    std::bitset<12>{0b101110110011},
    std::bitset<12>{0b010010110110},
    std::bitset<12>{0b100100001011},
    std::bitset<12>{0b111111110110},
    std::bitset<12>{0b011100101011},
    std::bitset<12>{0b101111110011},
    std::bitset<12>{0b110001110001},
    std::bitset<12>{0b011011101000},
    std::bitset<12>{0b110110000101},
    std::bitset<12>{0b101001110000},
    std::bitset<12>{0b110111111111},
    std::bitset<12>{0b001100000110},
    std::bitset<12>{0b001100111111},
    std::bitset<12>{0b010101010111},
    std::bitset<12>{0b100001001110},
    std::bitset<12>{0b110011001010},
    std::bitset<12>{0b011010100000},
    std::bitset<12>{0b001010101011},
    std::bitset<12>{0b000010000101},
    std::bitset<12>{0b100101010010},
    std::bitset<12>{0b111011110101},
    std::bitset<12>{0b111110010001},
    std::bitset<12>{0b011000011110},
    std::bitset<12>{0b001111111101},
    std::bitset<12>{0b011010111100},
    std::bitset<12>{0b001011100110},
    std::bitset<12>{0b100110101010},
    std::bitset<12>{0b101100001000},
    std::bitset<12>{0b101011000000},
    std::bitset<12>{0b111000010011},
    std::bitset<12>{0b001101000111},
    std::bitset<12>{0b010001010111},
    std::bitset<12>{0b000100000001},
    std::bitset<12>{0b000110001101},
    std::bitset<12>{0b001111100010},
    std::bitset<12>{0b111000100011},
    std::bitset<12>{0b111111001010},
    std::bitset<12>{0b010011110100},
    std::bitset<12>{0b111111000010},
    std::bitset<12>{0b001100001100},
    std::bitset<12>{0b100010110110},
    std::bitset<12>{0b010111101110},
    std::bitset<12>{0b100010000111},
    std::bitset<12>{0b100101001000},
    std::bitset<12>{0b000011011100},
    std::bitset<12>{0b110010001111},
    std::bitset<12>{0b111000111110},
    std::bitset<12>{0b010110001101},
    std::bitset<12>{0b100110001100},
    std::bitset<12>{0b101001000011},
    std::bitset<12>{0b010110010000},
    std::bitset<12>{0b010010100101},
    std::bitset<12>{0b010110110001},
    std::bitset<12>{0b001111001001},
    std::bitset<12>{0b101011100111},
    std::bitset<12>{0b101010010100},
    std::bitset<12>{0b000001101100},
    std::bitset<12>{0b100010000110},
    std::bitset<12>{0b010111101010},
    std::bitset<12>{0b110010100100},
    std::bitset<12>{0b110011010000},
    std::bitset<12>{0b100110100110},
    std::bitset<12>{0b011010110101},
    std::bitset<12>{0b000011100111},
    std::bitset<12>{0b001001100111},
    std::bitset<12>{0b101011100000},
    std::bitset<12>{0b010010011000},
    std::bitset<12>{0b000010000011},
    std::bitset<12>{0b010111111100},
    std::bitset<12>{0b001010111101},
    std::bitset<12>{0b001111010010},
    std::bitset<12>{0b101011110000},
    std::bitset<12>{0b110111011100},
    std::bitset<12>{0b011100001110},
    std::bitset<12>{0b010000000001},
    std::bitset<12>{0b101110001100},
    std::bitset<12>{0b001011111110},
    std::bitset<12>{0b110100100001},
    std::bitset<12>{0b011010111101},
    std::bitset<12>{0b100110010101},
    std::bitset<12>{0b111111100010},
    std::bitset<12>{0b100111101010},
    std::bitset<12>{0b110010010001},
    std::bitset<12>{0b100010111001},
    std::bitset<12>{0b001010000000},
    std::bitset<12>{0b010011110001},
    std::bitset<12>{0b001100010110},
    std::bitset<12>{0b001111100100},
    std::bitset<12>{0b001011010111},
    std::bitset<12>{0b001010110101},
    std::bitset<12>{0b010111100101},
    std::bitset<12>{0b010100001110},
    std::bitset<12>{0b000110010100},
    std::bitset<12>{0b000001111101},
    std::bitset<12>{0b110101100101},
    std::bitset<12>{0b010101100011},
    std::bitset<12>{0b011110111000},
    std::bitset<12>{0b100001101001},
    std::bitset<12>{0b001001001011},
    std::bitset<12>{0b111010101101},
    std::bitset<12>{0b001111011110},
    std::bitset<12>{0b110111110001},
    std::bitset<12>{0b001110100100},
    std::bitset<12>{0b100011100001},
    std::bitset<12>{0b100001111111},
    std::bitset<12>{0b100000111001},
    std::bitset<12>{0b000110110100},
    std::bitset<12>{0b111001110011},
    std::bitset<12>{0b010111000110},
    std::bitset<12>{0b101100101111},
    std::bitset<12>{0b000110001011},
    std::bitset<12>{0b110111101101},
    std::bitset<12>{0b110101001101},
    std::bitset<12>{0b101111101011},
    std::bitset<12>{0b111010110101},
    std::bitset<12>{0b101101111110},
    std::bitset<12>{0b011001001100},
    std::bitset<12>{0b010100110101},
    std::bitset<12>{0b110100101100},
    std::bitset<12>{0b110011101111},
    std::bitset<12>{0b010000111101},
    std::bitset<12>{0b111101011111},
    std::bitset<12>{0b111010111100},
    std::bitset<12>{0b011000101001},
    std::bitset<12>{0b010000111000},
    std::bitset<12>{0b001010001001},
    std::bitset<12>{0b100111110111},
    std::bitset<12>{0b010111011010},
    std::bitset<12>{0b001011010100},
    std::bitset<12>{0b011001001101},
    std::bitset<12>{0b010011100000},
    std::bitset<12>{0b000111010010},
    std::bitset<12>{0b000001101110},
    std::bitset<12>{0b001101011110},
    std::bitset<12>{0b100000010000},
    std::bitset<12>{0b010100000010},
    std::bitset<12>{0b010010000110},
    std::bitset<12>{0b111000101100},
    std::bitset<12>{0b101111101100},
    std::bitset<12>{0b000101111010},
    std::bitset<12>{0b111011011101},
    std::bitset<12>{0b011101000011},
    std::bitset<12>{0b000111000100},
    std::bitset<12>{0b010101111001},
    std::bitset<12>{0b100110010001},
    std::bitset<12>{0b000001011101},
    std::bitset<12>{0b010010101101},
    std::bitset<12>{0b100101100111},
    std::bitset<12>{0b100101110010},
    std::bitset<12>{0b101001000001},
    std::bitset<12>{0b110000110001},
    std::bitset<12>{0b101110111111},
    std::bitset<12>{0b100100000010},
    std::bitset<12>{0b011010001110},
    std::bitset<12>{0b011011000110},
    std::bitset<12>{0b000110001001},
    std::bitset<12>{0b010110100101},
    std::bitset<12>{0b111001110101},
    std::bitset<12>{0b000010011000},
    std::bitset<12>{0b010110011011},
    std::bitset<12>{0b100110010111},
    std::bitset<12>{0b111111010010},
    std::bitset<12>{0b101011001101},
    std::bitset<12>{0b010011100101},
    std::bitset<12>{0b010010110011},
    std::bitset<12>{0b101100011100},
    std::bitset<12>{0b010111010110},
    std::bitset<12>{0b110001101100},
    std::bitset<12>{0b000101101000},
    std::bitset<12>{0b010011101000},
    std::bitset<12>{0b101011100011},
    std::bitset<12>{0b000001001100},
    std::bitset<12>{0b101111110010},
    std::bitset<12>{0b111001111100},
    std::bitset<12>{0b000111111010},
    std::bitset<12>{0b110100101010},
    std::bitset<12>{0b101010110011},
    std::bitset<12>{0b000011111010},
    std::bitset<12>{0b011100111001},
    std::bitset<12>{0b101010001110},
    std::bitset<12>{0b010101010001},
    std::bitset<12>{0b011110101011},
    std::bitset<12>{0b001111001011},
    std::bitset<12>{0b010100101001},
    std::bitset<12>{0b110001100000},
    std::bitset<12>{0b110101000010},
    std::bitset<12>{0b011100110011},
    std::bitset<12>{0b111111011111},
    std::bitset<12>{0b100010000011},
    std::bitset<12>{0b101001100111},
    std::bitset<12>{0b000000101000},
    std::bitset<12>{0b101110110100},
    std::bitset<12>{0b110100111010},
    std::bitset<12>{0b111101110010},
    std::bitset<12>{0b010111111011},
    std::bitset<12>{0b111110100100},
    std::bitset<12>{0b010001100001},
    std::bitset<12>{0b000011010011},
    std::bitset<12>{0b000011100011},
    std::bitset<12>{0b110010010011},
    std::bitset<12>{0b111010011000},
    std::bitset<12>{0b101111001111},
    std::bitset<12>{0b011000100111},
    std::bitset<12>{0b010101101011},
    std::bitset<12>{0b001000001101},
    std::bitset<12>{0b110110110111},
    std::bitset<12>{0b111100010100},
    std::bitset<12>{0b100001100001},
    std::bitset<12>{0b100010100001},
    std::bitset<12>{0b010001011001},
    std::bitset<12>{0b101010110000},
    std::bitset<12>{0b011110101010},
    std::bitset<12>{0b011110111100},
    std::bitset<12>{0b100110100010},
    std::bitset<12>{0b011111111101},
    std::bitset<12>{0b100111001110},
    std::bitset<12>{0b101011011111},
    std::bitset<12>{0b000011100000},
    std::bitset<12>{0b111110101001},
    std::bitset<12>{0b000010110010},
    std::bitset<12>{0b110000001110},
    std::bitset<12>{0b110011111010},
    std::bitset<12>{0b001001101111},
    std::bitset<12>{0b100010010001},
    std::bitset<12>{0b101001010010},
    std::bitset<12>{0b111111111010},
    std::bitset<12>{0b000000111100},
    std::bitset<12>{0b000001000001},
    std::bitset<12>{0b100000110100},
    std::bitset<12>{0b010000101111},
    std::bitset<12>{0b001111111001},
    std::bitset<12>{0b001110001010},
    std::bitset<12>{0b100111110100},
    std::bitset<12>{0b000110111111},
    std::bitset<12>{0b010100010100},
    std::bitset<12>{0b001000000110},
    std::bitset<12>{0b011011110001},
    std::bitset<12>{0b100011110011},
    std::bitset<12>{0b011101111000},
    std::bitset<12>{0b011011000011},
    std::bitset<12>{0b110101100011},
    std::bitset<12>{0b111101001100},
    std::bitset<12>{0b010001001010},
    std::bitset<12>{0b010010001101},
    std::bitset<12>{0b111110010111},
    std::bitset<12>{0b111010011101},
    std::bitset<12>{0b100111101011},
    std::bitset<12>{0b000110000101},
    std::bitset<12>{0b010111011000},
    std::bitset<12>{0b111110010011},
    std::bitset<12>{0b101001100001},
    std::bitset<12>{0b011010100001},
    std::bitset<12>{0b100111100011},
    std::bitset<12>{0b101010001101},
    std::bitset<12>{0b000011101100},
    std::bitset<12>{0b010001010001},
    std::bitset<12>{0b010000000000},
    std::bitset<12>{0b111001100111},
    std::bitset<12>{0b110010000101},
    std::bitset<12>{0b010011101101},
    std::bitset<12>{0b100101000100},
    std::bitset<12>{0b000011100101},
    std::bitset<12>{0b111101101110},
    std::bitset<12>{0b001110101000},
    std::bitset<12>{0b010110101111},
    std::bitset<12>{0b010011110000},
    std::bitset<12>{0b011101011100},
    std::bitset<12>{0b011001100100},
    std::bitset<12>{0b001101011011},
    std::bitset<12>{0b101110011111},
    std::bitset<12>{0b100001101010},
    std::bitset<12>{0b110111111000},
    std::bitset<12>{0b000001111011},
    std::bitset<12>{0b101111000100},
    std::bitset<12>{0b100100001010},
    std::bitset<12>{0b101001110011},
    std::bitset<12>{0b010111100010},
    std::bitset<12>{0b110111001011},
    std::bitset<12>{0b100001000100},
    std::bitset<12>{0b001001101000},
    std::bitset<12>{0b000001100010},
    std::bitset<12>{0b001011001110},
    std::bitset<12>{0b001100000000},
    std::bitset<12>{0b101110010111},
    std::bitset<12>{0b110011101011},
    std::bitset<12>{0b001110001101},
    std::bitset<12>{0b001000110101},
    std::bitset<12>{0b100111101110},
    std::bitset<12>{0b000001010101},
    std::bitset<12>{0b011001100101},
    std::bitset<12>{0b010001000111},
    std::bitset<12>{0b011010100101},
    std::bitset<12>{0b011110111111},
    std::bitset<12>{0b110001000000},
    std::bitset<12>{0b000001110000},
    std::bitset<12>{0b011101000000},
    std::bitset<12>{0b100011000010},
    std::bitset<12>{0b110101001011},
    std::bitset<12>{0b101100000110},
    std::bitset<12>{0b111001001111},
    std::bitset<12>{0b110100010110},
    std::bitset<12>{0b001001001000},
    std::bitset<12>{0b110100011110},
    std::bitset<12>{0b101101001000},
    std::bitset<12>{0b000001100000},
    std::bitset<12>{0b101000000100},
    std::bitset<12>{0b000000100110},
    std::bitset<12>{0b111101111000},
    std::bitset<12>{0b100001101011},
    std::bitset<12>{0b111100011101},
    std::bitset<12>{0b010001001101},
    std::bitset<12>{0b101011010001},
    std::bitset<12>{0b001100010010},
    std::bitset<12>{0b100101010000},
    std::bitset<12>{0b111110010000},
    std::bitset<12>{0b101110101001},
    std::bitset<12>{0b101001101011},
    std::bitset<12>{0b111000011010},
    std::bitset<12>{0b001111101101},
    std::bitset<12>{0b001001011101},
    std::bitset<12>{0b111000010010},
    std::bitset<12>{0b111110111100},
    std::bitset<12>{0b110000101101},
    std::bitset<12>{0b111000000000},
    std::bitset<12>{0b001010001010},
    std::bitset<12>{0b100001101100},
    std::bitset<12>{0b010101110111},
    std::bitset<12>{0b001001011001},
    std::bitset<12>{0b001110000001},
    std::bitset<12>{0b100100101100},
    std::bitset<12>{0b011111011010},
    std::bitset<12>{0b001001000100},
    std::bitset<12>{0b100000111111},
    std::bitset<12>{0b111001100110},
    std::bitset<12>{0b100101110000},
    std::bitset<12>{0b000001001111},
    std::bitset<12>{0b111110010100},
    std::bitset<12>{0b100101000000},
    std::bitset<12>{0b001000000111},
    std::bitset<12>{0b010100000101},
    std::bitset<12>{0b010101000001},
    std::bitset<12>{0b100111000110},
    std::bitset<12>{0b110101000100},
    std::bitset<12>{0b110110001111},
    std::bitset<12>{0b001001000011},
    std::bitset<12>{0b111110001101},
    std::bitset<12>{0b011000001110},
    std::bitset<12>{0b100001111011},
    std::bitset<12>{0b101110011001},
    std::bitset<12>{0b011011001110},
    std::bitset<12>{0b000100100110},
    std::bitset<12>{0b100101100010},
    std::bitset<12>{0b111110101011},
    std::bitset<12>{0b010000101010},
    std::bitset<12>{0b000011011110},
    std::bitset<12>{0b101110010001},
    std::bitset<12>{0b101000011101},
    std::bitset<12>{0b101001001010},
    std::bitset<12>{0b110101011101},
    std::bitset<12>{0b001111110111},
    std::bitset<12>{0b110001110000},
    std::bitset<12>{0b001011101011},
    std::bitset<12>{0b111110000011},
    std::bitset<12>{0b100111011011},
    std::bitset<12>{0b101011001000},
    std::bitset<12>{0b010001000110},
    std::bitset<12>{0b100100111010},
    std::bitset<12>{0b010111001111},
    std::bitset<12>{0b111101000111},
    std::bitset<12>{0b011001111110},
    std::bitset<12>{0b000110010000},
    std::bitset<12>{0b111100111111},
    std::bitset<12>{0b000111011111},
    std::bitset<12>{0b110000101000},
    std::bitset<12>{0b011001101100},
    std::bitset<12>{0b111000011011},
    std::bitset<12>{0b011110010110},
    std::bitset<12>{0b010101100111},
    std::bitset<12>{0b011111000101},
    std::bitset<12>{0b100111100000},
    std::bitset<12>{0b000001001001},
    std::bitset<12>{0b010111010100},
    std::bitset<12>{0b101010100000},
    std::bitset<12>{0b010111001011},
    std::bitset<12>{0b110001010111},
    std::bitset<12>{0b000110100111},
    std::bitset<12>{0b010110010001},
    std::bitset<12>{0b010111000001},
    std::bitset<12>{0b011010001010},
    std::bitset<12>{0b110111010000},
    std::bitset<12>{0b000000100001},
    std::bitset<12>{0b000110110110},
    std::bitset<12>{0b110011111111},
    std::bitset<12>{0b011011101100},
    std::bitset<12>{0b010011011100},
    std::bitset<12>{0b111000011101},
    std::bitset<12>{0b000001111111},
    std::bitset<12>{0b010100000011},
    std::bitset<12>{0b110001111100},
    std::bitset<12>{0b100000011001},
    std::bitset<12>{0b010100100101},
    std::bitset<12>{0b011010010011},
    std::bitset<12>{0b000011110110},
    std::bitset<12>{0b110100011001},
    std::bitset<12>{0b110111100101},
    std::bitset<12>{0b000001000100},
    std::bitset<12>{0b001110111100},
    std::bitset<12>{0b010011010110},
    std::bitset<12>{0b100100010111},
    std::bitset<12>{0b110111011110},
    std::bitset<12>{0b000011111100},
    std::bitset<12>{0b110011010011},
    std::bitset<12>{0b100110001110},
    std::bitset<12>{0b000101001011},
    std::bitset<12>{0b110110101001},
    std::bitset<12>{0b111010011111},
    std::bitset<12>{0b110001010000},
    std::bitset<12>{0b100111111100},
    std::bitset<12>{0b010000110001},
    std::bitset<12>{0b011110000111},
    std::bitset<12>{0b110011110001},
    std::bitset<12>{0b010110110011},
    std::bitset<12>{0b100010001011},
    std::bitset<12>{0b110010101011},
    std::bitset<12>{0b110111100010},
    std::bitset<12>{0b110010001001},
    std::bitset<12>{0b100000001100},
    std::bitset<12>{0b010110010011},
    std::bitset<12>{0b000111111111},
    std::bitset<12>{0b011010010111},
    std::bitset<12>{0b110101100100},
    std::bitset<12>{0b110100000101},
    std::bitset<12>{0b100111010001},
    std::bitset<12>{0b110110111101},
    std::bitset<12>{0b100100001101},
    std::bitset<12>{0b100111101000},
    std::bitset<12>{0b000111000011},
    std::bitset<12>{0b100001010001},
    std::bitset<12>{0b101011001100},
    std::bitset<12>{0b100100111001},
    std::bitset<12>{0b100010001111}
};
}
