/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:15:17 by hurabe            #+#    #+#             */
/*   Updated: 2024/11/11 22:31:59 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	std::string str;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; argv[i]; i++)
			str += argv[i];
		for (std::size_t i = 0; i < str.length(); i++)
			str[i] = std::toupper(str[i]);
			
	}
	std::cout << str << std::endl;
	return 0;
}

/*
出力結果から読み取れること
・入出力と基本的な文字列操作に慣れるための課題
・文字列をすべて大文字に変換して出力する機能を実装する
・名前空間「namespace」は使用できない。stdを使用する必要がある。
・std  は、すべてのC++標準ライブラリ(C++ライブラリおよびC言語互換ライブラリ)の内容を含むモジュール。
・作成される実行ファイル名「./megaphone」
・小文字は大文字に変換されて出力される
・コマンドライン引数から入力値を取る
・何も引数がない場合、「* LOUD AND UNBEARABLE FEEDBACK NOISE *」と出力する。
・

*/
