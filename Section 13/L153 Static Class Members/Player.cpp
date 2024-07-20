#include "Player.h"

int Player::num_players {0};

void Player::increment_num_players() { 
    num_players++; 
}

void Player::decrement_num_players() { 
    num_players--; 
}

int Player::get_num_players() {
    return num_players;
}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
        increment_num_players();
}

Player::Player(const Player &source)
    : Player {source.name, source.health, source.xp} {
}

Player::~Player() {
    decrement_num_players();
}

