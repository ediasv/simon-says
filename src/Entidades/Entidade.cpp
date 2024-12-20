#include "Entidades/Entidade.h"
#include <SFML/System/Vector2.hpp>
#include <iostream>

using namespace Entidades;

Entidade::Entidade() {}

Entidade::Entidade(sf::Vector2<float> pos, sf::Vector2<float> tamanho,
                   const std::string &path)
    : Ente(path), pos(pos), tamanho(tamanho),
      velocidade(sf::Vector2<float>(0.1f, 0.1f)) {}

Entidade::~Entidade() {}

sf::Vector2<float> Entidade::getPos() const { return pos; }

void Entidade::setPos(sf::Vector2<float> &novaPos) { pos = novaPos; }

void Entidade::salvarDataBuffer() {}

sf::Vector2<float> Entidade::getVel() const { return velocidade; }

void Entidade::setVel(sf::Vector2<float> &novaVel) { velocidade = novaVel; }
