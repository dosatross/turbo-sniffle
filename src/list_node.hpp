/*
Author: Hayden Warmington
Student ID: s3486075
*/
#pragma once

#include <string>
#include <memory>

/*
@class list_node contains all methods to interface with the node
list_node only supports the std::string data type
each node owns (through unique_ptr) the next node
each node has a count for each string to avoid duplicates in the list
*/

class list_node
{
	private:
		std::string str;
		unsigned count;
		std::unique_ptr<list_node> next;

	public:
		list_node(std::string &s);
		virtual ~list_node() {}
		std::string get_string();
		void set_string(std::string);
		unsigned get_count();
		void incr_count();
		void decr_count();
		void set_next(std::unique_ptr<list_node> &&new_next);
		list_node* get_next();
		std::unique_ptr<list_node>& get_next_ptr();
};