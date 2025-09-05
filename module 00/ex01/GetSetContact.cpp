/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GetSetContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 00:19:23 by shrimech          #+#    #+#             */
/*   Updated: 2025/09/05 06:30:14 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

using namespace std;

const string&	Contact::get_firstname() const
{
	return (this->firstname);
}

const string&	Contact::get_lastname() const
{
	return (this->lastname);
}

const string&	Contact::get_nickname() const
{
	return (this->nickname);
}

const string&	Contact::get_secret() const
{
	return (this->secret);
}

const string&	Contact::get_number() const
{
	return (this->number);
}

void		Contact::set_firstname(std::string firstname)
{
	this->firstname = firstname;
}

void		Contact::set_lastname(std::string lastname)
{
	this->lastname = lastname;
}

void		Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void		Contact::set_secret(std::string secret)
{
	this->secret = secret;
}

void		Contact::set_number(std::string number)
{
	this->number = number;
}
