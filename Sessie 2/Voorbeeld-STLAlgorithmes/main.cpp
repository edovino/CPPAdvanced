#include <vector>
#include <algorithm>
#include <iostream>

#include "Particle.h"

// aanpak 1: met een gewone function
bool isDead(Particle& p) {
    return !p.isAlive();
};

// aanpak 2: met een 'Function Object' (functor)
class ParticleLifeDetector {
    public:
        bool operator()(Particle p) const {
            return !p.isAlive();
        }
};

void dumpParticles(const std::string header, const std::vector<Particle>& particles) {
    std::cout << header << std::endl;
    for (const auto& particle : particles) {
        std::cout << "Particle #" << particle.index << " is " << particle.isAlive() << std::endl;
    }
}

int main() {
    std::vector<Particle> particles;
    particles.reserve(10);
    // vul met wat particles, om-en-om dead & alive
    for (int i = 0; i < 10; ++i) {
        particles.push_back(Particle(i, i % 2 == 0));
    }

    dumpParticles(" ======== BEGIN", particles);

    std::vector<Particle>::iterator newEnd;

    // drie keer een verschillende aanpak voor hetzelfde:

    // aanpak 1: met een function
    newEnd = std::remove_if(particles.begin(), particles.end(), isDead);

    // aanpak 2: met een Function Object
//    newEnd = std::remove_if(particles.begin(), particles.end(), ParticleLifeDetector());

    // aanpak 3: met een lambda expression
//    newEnd = std::remove_if(particles.begin(), particles.end(), [](const Particle& p) { return !p.isAlive(); });

    // dit geeft een vreemd resultaat, want volgens de spec is alles tussen newEnd en 't 'echte' einde nu 'undefined'
    dumpParticles(" ======== NA std::remove_if", particles);

    particles.erase(newEnd, particles.end());

    dumpParticles(" ======== NA .erase(newEnd, end)", particles);

    return 0;
}