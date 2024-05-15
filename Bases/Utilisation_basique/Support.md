---
marp: true
theme: gaia
class: invert
paginate: true
footer: "Kézia Marcou | 2024"

style: |
  .columns {
    display: grid;
    grid-template-columns: repeat(2, minmax(0, 1fr));
    gap: 1rem;
    font-size: 0.8em;
  }
---

<!-- Pagination style -->
<style>
section::after {
  content: attr(data-marpit-pagination) '/' attr(data-marpit-pagination-total);
}
</style>

<!--Centered images -->
<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
}
</style>



<!-- Title slide -->
# Formation

## Utilisation de base de PlatformIO

![bg right w:10cm](../../images/pio_logo.png)

---

### Sommaire 

**1. Structure d'un projet PlatformIO**
**2. Création d'un projet**
**3. Ouvrir un projet récupéré**
**4. (optionnel) Modification de la structure d'un projet**

Demandez à ChatGPT ou Wikipédia si vous comprenez pas un mot, flemme d'écrire un glossaire. 

--- 
<!--footer: Section : Structure d'un projet PlatformIO - Kézia Marcou | 2024 -->
## Structure d'un projet PlatformIO

